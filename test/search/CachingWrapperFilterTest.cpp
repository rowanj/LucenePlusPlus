/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2010 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "LuceneTestFixture.h"
#include "RAMDirectory.h"
#include "IndexWriter.h"
#include "StandardAnalyzer.h"
#include "IndexReader.h"
#include "MockFilter.h"
#include "CachingWrapperFilter.h"
#include "QueryWrapperFilter.h"
#include "TermQuery.h"
#include "Term.h"
#include "NumericRangeFilter.h"
#include "FieldCacheRangeFilter.h"
#include "OpenBitSet.h"
#include "DocIdSet.h"
#include "OpenBitSetDISI.h"

using namespace Lucene;

BOOST_FIXTURE_TEST_SUITE(CachingWrapperFilterTest, LuceneTestFixture)

static void checkDocIdSetCacheable(IndexReaderPtr reader, FilterPtr filter, bool shouldCacheable)
{
    CachingWrapperFilterPtr cacher = newLucene<CachingWrapperFilter>(filter);
    DocIdSetPtr originalSet = filter->getDocIdSet(reader);
    DocIdSetPtr cachedSet = cacher->getDocIdSet(reader);
    BOOST_CHECK(cachedSet->isCacheable());
    BOOST_CHECK_EQUAL(shouldCacheable, originalSet->isCacheable());
    if (originalSet->isCacheable())
        BOOST_CHECK(MiscUtils::equalTypes(originalSet, cachedSet));
    else
        BOOST_CHECK(MiscUtils::typeOf<OpenBitSetDISI>(cachedSet));
}

BOOST_AUTO_TEST_CASE(testCachingWorks)
{
    DirectoryPtr dir = newLucene<RAMDirectory>();
    IndexWriterPtr writer = newLucene<IndexWriter>(dir, newLucene<StandardAnalyzer>(LuceneVersion::LUCENE_CURRENT), true, IndexWriter::MaxFieldLengthLIMITED);
    writer->close();

    IndexReaderPtr reader = IndexReader::open(dir, true);

    MockFilterPtr filter = newLucene<MockFilter>();
    CachingWrapperFilterPtr cacher = newLucene<CachingWrapperFilter>(filter);

    // first time, nested filter is called
    cacher->getDocIdSet(reader);
    BOOST_CHECK(filter->wasCalled());

    // make sure no exception if cache is holding the wrong docIdSet
    cacher->getDocIdSet(reader);

    // second time, nested filter should not be called
    filter->clear();
    cacher->getDocIdSet(reader);
    BOOST_CHECK(!filter->wasCalled());

    reader->close();
}

namespace TestIsCacheable
{
    class OpenBitSetFilter : public Filter
    {
    public:
        virtual ~OpenBitSetFilter()
        {
        }
    
    public:
        virtual DocIdSetPtr getDocIdSet(IndexReaderPtr reader)
        {
            return newLucene<OpenBitSet>();
        }
    };
}

BOOST_AUTO_TEST_CASE(testIsCacheable)
{
    DirectoryPtr dir = newLucene<RAMDirectory>();
    IndexWriterPtr writer = newLucene<IndexWriter>(dir, newLucene<StandardAnalyzer>(LuceneVersion::LUCENE_CURRENT), true, IndexWriter::MaxFieldLengthLIMITED);
    writer->close();

    IndexReaderPtr reader = IndexReader::open(dir, true);
    
    // not cacheable
    checkDocIdSetCacheable(reader, newLucene<QueryWrapperFilter>(newLucene<TermQuery>(newLucene<Term>(L"test", L"value"))), false);
    
    // returns default empty docidset, always cacheable
    checkDocIdSetCacheable(reader, NumericRangeFilter::newIntRange(L"test", 10000, -10000, true, true), true);
    
    // is cacheable
    checkDocIdSetCacheable(reader, FieldCacheRangeFilter::newIntRange(L"test", 10, 20, true, true), true);
    
    // a openbitset filter is always cacheable
    checkDocIdSetCacheable(reader, newLucene<TestIsCacheable::OpenBitSetFilter>(), true);
}

BOOST_AUTO_TEST_SUITE_END()