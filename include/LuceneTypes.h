/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2010 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#ifndef LUCENETYPES_H
#define LUCENETYPES_H

#include "Lucene.h"

#define DECLARE_SHARED_PTR(Type) \
    class Type; \
    typedef boost::shared_ptr<Type> Type##Ptr; \
    typedef boost::weak_ptr<Type> Type##WeakPtr;
    
namespace Lucene
{
    // analysis
    DECLARE_SHARED_PTR(Analyzer)
    DECLARE_SHARED_PTR(ASCIIFoldingFilter)
    DECLARE_SHARED_PTR(BaseCharFilter)
    DECLARE_SHARED_PTR(CachingTokenFilter)
    DECLARE_SHARED_PTR(CharArraySet)
    DECLARE_SHARED_PTR(CharFilter)
    DECLARE_SHARED_PTR(CharReader)
    DECLARE_SHARED_PTR(CharStream)
    DECLARE_SHARED_PTR(CharTokenizer)
    DECLARE_SHARED_PTR(FlagsAttribute)
    DECLARE_SHARED_PTR(ISOLatin1AccentFilter)
    DECLARE_SHARED_PTR(KeywordAnalyzer)
    DECLARE_SHARED_PTR(KeywordTokenizer)
    DECLARE_SHARED_PTR(LengthFilter)
    DECLARE_SHARED_PTR(LetterTokenizer)
    DECLARE_SHARED_PTR(LowerCaseFilter)
    DECLARE_SHARED_PTR(LowerCaseTokenizer)
    DECLARE_SHARED_PTR(MappingCharFilter)
    DECLARE_SHARED_PTR(NormalizeCharMap)
    DECLARE_SHARED_PTR(NumericTokenStream)
    DECLARE_SHARED_PTR(OffsetAttribute)
    DECLARE_SHARED_PTR(PayloadAttribute)
    DECLARE_SHARED_PTR(PerFieldAnalyzerWrapper)
    DECLARE_SHARED_PTR(PorterStemFilter)
    DECLARE_SHARED_PTR(PorterStemmer)
    DECLARE_SHARED_PTR(PositionIncrementAttribute)    
    DECLARE_SHARED_PTR(SimpleAnalyzer)
    DECLARE_SHARED_PTR(SinkFilter)
    DECLARE_SHARED_PTR(SinkTokenStream)
    DECLARE_SHARED_PTR(StandardAnalyzer)
    DECLARE_SHARED_PTR(StandardAnalyzerSavedStreams)
    DECLARE_SHARED_PTR(StandardFilter)
    DECLARE_SHARED_PTR(StandardTokenizer)
    DECLARE_SHARED_PTR(StandardTokenizerImpl)
    DECLARE_SHARED_PTR(StopAnalyzer)
    DECLARE_SHARED_PTR(StopAnalyzerSavedStreams)
    DECLARE_SHARED_PTR(StopFilter)
    DECLARE_SHARED_PTR(TeeSinkTokenFilter)
    DECLARE_SHARED_PTR(TermAttribute)
    DECLARE_SHARED_PTR(Token)
    DECLARE_SHARED_PTR(TokenAttributeFactory)
    DECLARE_SHARED_PTR(TokenFilter)
    DECLARE_SHARED_PTR(Tokenizer)
    DECLARE_SHARED_PTR(TokenStream)
    DECLARE_SHARED_PTR(TypeAttribute)
    DECLARE_SHARED_PTR(WhitespaceAnalyzer)
    DECLARE_SHARED_PTR(WhitespaceTokenizer)
    DECLARE_SHARED_PTR(WordlistLoader)
    
    // document
    DECLARE_SHARED_PTR(AbstractField)
    DECLARE_SHARED_PTR(CompressionTools)
    DECLARE_SHARED_PTR(DateField)
    DECLARE_SHARED_PTR(DateTools)
    DECLARE_SHARED_PTR(Document)
    DECLARE_SHARED_PTR(Field)
    DECLARE_SHARED_PTR(Fieldable)
    DECLARE_SHARED_PTR(FieldSelector)
    DECLARE_SHARED_PTR(LoadFirstFieldSelector)
    DECLARE_SHARED_PTR(MapFieldSelector)
    DECLARE_SHARED_PTR(NumberTools)
    DECLARE_SHARED_PTR(NumericField)
    DECLARE_SHARED_PTR(SetBasedFieldSelector)

    // index
    DECLARE_SHARED_PTR(AbstractAllTermDocs)
    DECLARE_SHARED_PTR(AllTermDocs)
    DECLARE_SHARED_PTR(BufferedDeletes)
    DECLARE_SHARED_PTR(ByteBlockAllocator)
    DECLARE_SHARED_PTR(ByteBlockPool)
    DECLARE_SHARED_PTR(ByteBlockPoolAllocatorBase)
    DECLARE_SHARED_PTR(ByteSliceReader)
    DECLARE_SHARED_PTR(ByteSliceWriter)
    DECLARE_SHARED_PTR(CharBlockPool)
    DECLARE_SHARED_PTR(CheckAbort)
    DECLARE_SHARED_PTR(CheckIndex)
    DECLARE_SHARED_PTR(CommitPoint)
    DECLARE_SHARED_PTR(CompoundFileReader)
    DECLARE_SHARED_PTR(CompoundFileWriter)
    DECLARE_SHARED_PTR(ConcurrentMergeScheduler)
    DECLARE_SHARED_PTR(CoreReaders)
    DECLARE_SHARED_PTR(CSIndexInput)
    DECLARE_SHARED_PTR(DefaultIndexingChain)
    DECLARE_SHARED_PTR(DefaultSkipListReader)
    DECLARE_SHARED_PTR(DefaultSkipListWriter)
    DECLARE_SHARED_PTR(DirectoryReader)
    DECLARE_SHARED_PTR(DocConsumer)
    DECLARE_SHARED_PTR(DocConsumerPerThread)
    DECLARE_SHARED_PTR(DocFieldConsumer)
    DECLARE_SHARED_PTR(DocFieldConsumerPerField)
    DECLARE_SHARED_PTR(DocFieldConsumerPerThread)
    DECLARE_SHARED_PTR(DocFieldConsumers)
    DECLARE_SHARED_PTR(DocFieldConsumersPerDoc)
    DECLARE_SHARED_PTR(DocFieldConsumersPerField)
    DECLARE_SHARED_PTR(DocFieldConsumersPerThread)
    DECLARE_SHARED_PTR(DocFieldProcessor)
    DECLARE_SHARED_PTR(DocFieldProcessorPerField)
    DECLARE_SHARED_PTR(DocFieldProcessorPerThread)
    DECLARE_SHARED_PTR(DocFieldProcessorPerThreadPerDoc)
    DECLARE_SHARED_PTR(DocInverter)
    DECLARE_SHARED_PTR(DocInverterPerField)
    DECLARE_SHARED_PTR(DocInverterPerThread)
    DECLARE_SHARED_PTR(DocState)
    DECLARE_SHARED_PTR(DocumentsWriter)
    DECLARE_SHARED_PTR(DocumentsWriterThreadState)
    DECLARE_SHARED_PTR(DocWriter)
    DECLARE_SHARED_PTR(FieldInfo)
    DECLARE_SHARED_PTR(FieldInfos)
    DECLARE_SHARED_PTR(FieldInvertState)
    DECLARE_SHARED_PTR(FieldNormStatus)
    DECLARE_SHARED_PTR(FieldSortedTermVectorMapper)
    DECLARE_SHARED_PTR(FieldsReader)
    DECLARE_SHARED_PTR(FieldsReaderLocal)
    DECLARE_SHARED_PTR(FieldsWriter)
    DECLARE_SHARED_PTR(FilterIndexReader)
    DECLARE_SHARED_PTR(FindSegmentsModified)
    DECLARE_SHARED_PTR(FindSegmentsOpen)
    DECLARE_SHARED_PTR(FindSegmentsRead)
    DECLARE_SHARED_PTR(FindSegmentsReopen)
    DECLARE_SHARED_PTR(FormatPostingsDocsConsumer)
    DECLARE_SHARED_PTR(FormatPostingsDocsWriter)
    DECLARE_SHARED_PTR(FormatPostingsFieldsConsumer)
    DECLARE_SHARED_PTR(FormatPostingsFieldsWriter)
    DECLARE_SHARED_PTR(FormatPostingsPositionsConsumer)
    DECLARE_SHARED_PTR(FormatPostingsPositionsWriter)
    DECLARE_SHARED_PTR(FormatPostingsTermsConsumer)
    DECLARE_SHARED_PTR(FormatPostingsTermsWriter)
    DECLARE_SHARED_PTR(FreqProxFieldMergeState)
    DECLARE_SHARED_PTR(FreqProxTermsWriter)
    DECLARE_SHARED_PTR(FreqProxTermsWriterPerField)
    DECLARE_SHARED_PTR(FreqProxTermsWriterPerThread)
    DECLARE_SHARED_PTR(FreqProxTermsWriterPostingList)
    DECLARE_SHARED_PTR(IndexCommit)
    DECLARE_SHARED_PTR(IndexDeletionPolicy)
    DECLARE_SHARED_PTR(IndexFileDeleter)
    DECLARE_SHARED_PTR(IndexFileNameFilter)
    DECLARE_SHARED_PTR(IndexingChain)
    DECLARE_SHARED_PTR(IndexReader)
    DECLARE_SHARED_PTR(IndexReaderWarmer)
    DECLARE_SHARED_PTR(IndexStatus)
    DECLARE_SHARED_PTR(IndexWriter)
    DECLARE_SHARED_PTR(IntBlockPool)
    DECLARE_SHARED_PTR(IntQueue)
    DECLARE_SHARED_PTR(InvertedDocConsumer)
    DECLARE_SHARED_PTR(InvertedDocConsumerPerField)
    DECLARE_SHARED_PTR(InvertedDocConsumerPerThread)
    DECLARE_SHARED_PTR(InvertedDocEndConsumer)
    DECLARE_SHARED_PTR(InvertedDocEndConsumerPerField)
    DECLARE_SHARED_PTR(InvertedDocEndConsumerPerThread)
    DECLARE_SHARED_PTR(KeepOnlyLastCommitDeletionPolicy)
    DECLARE_SHARED_PTR(LogByteSizeMergePolicy)
    DECLARE_SHARED_PTR(LogDocMergePolicy)
    DECLARE_SHARED_PTR(LogMergePolicy)
    DECLARE_SHARED_PTR(MergeDocIDRemapper)
    DECLARE_SHARED_PTR(MergePolicy)
    DECLARE_SHARED_PTR(MergeScheduler)
    DECLARE_SHARED_PTR(MergeSpecification)
    DECLARE_SHARED_PTR(MergeThread)
    DECLARE_SHARED_PTR(MultiLevelSkipListReader)
    DECLARE_SHARED_PTR(MultiLevelSkipListWriter)
    DECLARE_SHARED_PTR(MultipleTermPositions)
    DECLARE_SHARED_PTR(MultiReader)
    DECLARE_SHARED_PTR(MultiTermDocs)
    DECLARE_SHARED_PTR(MultiTermEnum)
    DECLARE_SHARED_PTR(MultiTermPositions)
    DECLARE_SHARED_PTR(MyCommitPoint)
    DECLARE_SHARED_PTR(MySegmentTermDocs)
    DECLARE_SHARED_PTR(Norm)
    DECLARE_SHARED_PTR(NormsWriter)
    DECLARE_SHARED_PTR(NormsWriterPerField)
    DECLARE_SHARED_PTR(NormsWriterPerThread)
    DECLARE_SHARED_PTR(Num)
    DECLARE_SHARED_PTR(OneMerge)
    DECLARE_SHARED_PTR(ParallelArrayTermVectorMapper)
    DECLARE_SHARED_PTR(ParallelReader)
    DECLARE_SHARED_PTR(ParallelTermEnum)
    DECLARE_SHARED_PTR(ParallelTermDocs)
    DECLARE_SHARED_PTR(ParallelTermPositions)
    DECLARE_SHARED_PTR(Payload)
    DECLARE_SHARED_PTR(PerDocBuffer)
    DECLARE_SHARED_PTR(PositionBasedTermVectorMapper)
    DECLARE_SHARED_PTR(RawPostingList)
    DECLARE_SHARED_PTR(ReaderCommit)
    DECLARE_SHARED_PTR(ReaderPool)
    DECLARE_SHARED_PTR(ReadOnlyDirectoryReader)
    DECLARE_SHARED_PTR(ReadOnlySegmentReader)
    DECLARE_SHARED_PTR(RefCount)
    DECLARE_SHARED_PTR(ReusableStringReader)
    DECLARE_SHARED_PTR(SegmentInfo)
    DECLARE_SHARED_PTR(SegmentInfoCollection)
    DECLARE_SHARED_PTR(SegmentInfos)
    DECLARE_SHARED_PTR(SegmentInfoStatus)
    DECLARE_SHARED_PTR(SegmentMergeInfo)
    DECLARE_SHARED_PTR(SegmentMergeQueue)
    DECLARE_SHARED_PTR(SegmentMerger)
    DECLARE_SHARED_PTR(SegmentReader)
    DECLARE_SHARED_PTR(SegmentReaderRef)
    DECLARE_SHARED_PTR(SegmentTermDocs)
    DECLARE_SHARED_PTR(SegmentTermEnum)
    DECLARE_SHARED_PTR(SegmentTermPositions)
    DECLARE_SHARED_PTR(SegmentTermPositionVector)
    DECLARE_SHARED_PTR(SegmentTermVector)
    DECLARE_SHARED_PTR(SegmentWriteState)
    DECLARE_SHARED_PTR(SerialMergeScheduler)
    DECLARE_SHARED_PTR(SingleTokenAttributeSource)
    DECLARE_SHARED_PTR(SkipBuffer)
    DECLARE_SHARED_PTR(SkipDocWriter)
    DECLARE_SHARED_PTR(SnapshotDeletionPolicy)
    DECLARE_SHARED_PTR(SortedTermVectorMapper)
    DECLARE_SHARED_PTR(StoredFieldStatus)
    DECLARE_SHARED_PTR(StoredFieldsWriter)
    DECLARE_SHARED_PTR(StoredFieldsWriterPerDoc)
    DECLARE_SHARED_PTR(StoredFieldsWriterPerThread)
    DECLARE_SHARED_PTR(Term)
    DECLARE_SHARED_PTR(TermBuffer)
    DECLARE_SHARED_PTR(TermEnum)
    DECLARE_SHARED_PTR(TermDocs)
    DECLARE_SHARED_PTR(TermFreqVector)
    DECLARE_SHARED_PTR(TermIndexStatus)
    DECLARE_SHARED_PTR(TermInfo)
    DECLARE_SHARED_PTR(TermInfosReader)
    DECLARE_SHARED_PTR(TermInfosReaderThreadResources)
    DECLARE_SHARED_PTR(TermInfosWriter)
    DECLARE_SHARED_PTR(TermPositions)
    DECLARE_SHARED_PTR(TermPositionsQueue)
    DECLARE_SHARED_PTR(TermPositionVector)
    DECLARE_SHARED_PTR(TermsHash)
    DECLARE_SHARED_PTR(TermsHashConsumer)
    DECLARE_SHARED_PTR(TermsHashConsumerPerField)
    DECLARE_SHARED_PTR(TermsHashConsumerPerThread)
    DECLARE_SHARED_PTR(TermsHashPerField)
    DECLARE_SHARED_PTR(TermsHashPerThread)
    DECLARE_SHARED_PTR(TermVectorEntry)
    DECLARE_SHARED_PTR(TermVectorEntryFreqSortedComparator)
    DECLARE_SHARED_PTR(TermVectorMapper)
    DECLARE_SHARED_PTR(TermVectorOffsetInfo)
    DECLARE_SHARED_PTR(TermVectorsReader)
    DECLARE_SHARED_PTR(TermVectorStatus)
    DECLARE_SHARED_PTR(TermVectorsTermsWriter)
    DECLARE_SHARED_PTR(TermVectorsTermsWriterPerDoc)
    DECLARE_SHARED_PTR(TermVectorsTermsWriterPerField)
    DECLARE_SHARED_PTR(TermVectorsTermsWriterPerThread)
    DECLARE_SHARED_PTR(TermVectorsTermsWriterPostingList)
    DECLARE_SHARED_PTR(TermVectorsWriter)
    DECLARE_SHARED_PTR(TermVectorsPositionInfo)
    DECLARE_SHARED_PTR(WaitQueue)
    
    // query parser
    DECLARE_SHARED_PTR(FastCharStream)
    DECLARE_SHARED_PTR(MultiFieldQueryParser)
    DECLARE_SHARED_PTR(QueryParser)
    DECLARE_SHARED_PTR(QueryParserCharStream)
    DECLARE_SHARED_PTR(QueryParserConstants)
    DECLARE_SHARED_PTR(QueryParserToken)
    DECLARE_SHARED_PTR(QueryParserTokenManager)
            
    // search
    DECLARE_SHARED_PTR(AveragePayloadFunction)
    DECLARE_SHARED_PTR(BooleanClause)
    DECLARE_SHARED_PTR(BooleanQuery)
    DECLARE_SHARED_PTR(BooleanScorer)
    DECLARE_SHARED_PTR(BooleanScorerCollector)
    DECLARE_SHARED_PTR(BooleanScorer2)
    DECLARE_SHARED_PTR(BooleanWeight)
    DECLARE_SHARED_PTR(Bucket)
    DECLARE_SHARED_PTR(BucketScorer)
    DECLARE_SHARED_PTR(BucketTable)
    DECLARE_SHARED_PTR(ByteCache)
    DECLARE_SHARED_PTR(ByteComparator)
    DECLARE_SHARED_PTR(ByteFieldSource)
    DECLARE_SHARED_PTR(ByteParser)    
    DECLARE_SHARED_PTR(Cache)
    DECLARE_SHARED_PTR(CachedDfSource)
    DECLARE_SHARED_PTR(CachingSpanFilter)
    DECLARE_SHARED_PTR(CachingWrapperFilter)
    DECLARE_SHARED_PTR(CellQueue)
    DECLARE_SHARED_PTR(Collector)
    DECLARE_SHARED_PTR(ComplexExplanation)
    DECLARE_SHARED_PTR(ConjunctionScorer)
    DECLARE_SHARED_PTR(ConstantScoreAutoRewrite)
    DECLARE_SHARED_PTR(ConstantScoreAutoRewriteDefault)
    DECLARE_SHARED_PTR(ConstantScoreBooleanQueryRewrite)
    DECLARE_SHARED_PTR(ConstantScoreFilterRewrite)
    DECLARE_SHARED_PTR(ConstantScoreQuery)
    DECLARE_SHARED_PTR(ConstantScorer)
    DECLARE_SHARED_PTR(ConstantWeight)
    DECLARE_SHARED_PTR(Coordinator)
    DECLARE_SHARED_PTR(CountingConjunctionSumScorer)
    DECLARE_SHARED_PTR(CountingDisjunctionSumScorer)
    DECLARE_SHARED_PTR(CreationPlaceholder)
    DECLARE_SHARED_PTR(CustomScoreProvider)
    DECLARE_SHARED_PTR(CustomScoreQuery)
    DECLARE_SHARED_PTR(CustomWeight)
    DECLARE_SHARED_PTR(CustomScorer)
    DECLARE_SHARED_PTR(DefaultByteParser)
    DECLARE_SHARED_PTR(DefaultCustomScoreProvider)
    DECLARE_SHARED_PTR(DefaultDoubleParser)
    DECLARE_SHARED_PTR(DefaultIntParser)
    DECLARE_SHARED_PTR(DefaultLongParser)
    DECLARE_SHARED_PTR(DefaultSimilarity)
    DECLARE_SHARED_PTR(DisjunctionMaxQuery)
    DECLARE_SHARED_PTR(DisjunctionMaxScorer)
    DECLARE_SHARED_PTR(DisjunctionMaxWeight)
    DECLARE_SHARED_PTR(DisjunctionSumScorer)
    DECLARE_SHARED_PTR(DocComparator)
    DECLARE_SHARED_PTR(DocIdSet)
    DECLARE_SHARED_PTR(DocIdSetIterator)
    DECLARE_SHARED_PTR(DocValues)
    DECLARE_SHARED_PTR(DoubleCache)
    DECLARE_SHARED_PTR(DoubleComparator)
    DECLARE_SHARED_PTR(DoubleFieldSource)
    DECLARE_SHARED_PTR(DoubleParser)
    DECLARE_SHARED_PTR(EmptyDocIdSet)
    DECLARE_SHARED_PTR(EmptyDocIdSetIterator)
    DECLARE_SHARED_PTR(Entry)
    DECLARE_SHARED_PTR(ExactPhraseScorer)
    DECLARE_SHARED_PTR(Explanation)
    DECLARE_SHARED_PTR(FieldCache)
    DECLARE_SHARED_PTR(FieldCacheDocIdSet)
    DECLARE_SHARED_PTR(FieldCacheEntry)
    DECLARE_SHARED_PTR(FieldCacheEntryImpl)
    DECLARE_SHARED_PTR(FieldCacheImpl)
    DECLARE_SHARED_PTR(FieldCacheRangeFilter)
    DECLARE_SHARED_PTR(FieldCacheSource)
    DECLARE_SHARED_PTR(FieldCacheTermsFilter)
    DECLARE_SHARED_PTR(FieldCacheTermsFilterDocIdSet)
    DECLARE_SHARED_PTR(FieldComparator)
    DECLARE_SHARED_PTR(FieldComparatorSource)
    DECLARE_SHARED_PTR(FieldDoc)
    DECLARE_SHARED_PTR(FieldDocIdSetIteratorIncrement)
    DECLARE_SHARED_PTR(FieldDocIdSetIteratorTermDocs)
    DECLARE_SHARED_PTR(FieldDocSortedHitQueue)
    DECLARE_SHARED_PTR(FieldMaskingSpanQuery)
    DECLARE_SHARED_PTR(FieldScoreQuery)
    DECLARE_SHARED_PTR(FieldValueHitQueue)
    DECLARE_SHARED_PTR(FieldValueHitQueueEntry)
    DECLARE_SHARED_PTR(Filter)
    DECLARE_SHARED_PTR(FilterCache)
    DECLARE_SHARED_PTR(FilterCleaner)
    DECLARE_SHARED_PTR(FilteredDocIdSet)
    DECLARE_SHARED_PTR(FilteredDocIdSetIterator)
    DECLARE_SHARED_PTR(FilteredQuery)
    DECLARE_SHARED_PTR(FilteredQueryWeight)
    DECLARE_SHARED_PTR(FilteredTermEnum)
    DECLARE_SHARED_PTR(FilterItem)
    DECLARE_SHARED_PTR(FilterManager)
    DECLARE_SHARED_PTR(FuzzyQuery)
    DECLARE_SHARED_PTR(FuzzyTermEnum)
    DECLARE_SHARED_PTR(HitQueue)
    DECLARE_SHARED_PTR(HitQueueBase)
    DECLARE_SHARED_PTR(IDFExplanation)
    DECLARE_SHARED_PTR(IndexSearcher)
    DECLARE_SHARED_PTR(IntCache)
    DECLARE_SHARED_PTR(IntComparator)
    DECLARE_SHARED_PTR(IntFieldSource)
    DECLARE_SHARED_PTR(IntParser)
    DECLARE_SHARED_PTR(LongCache)
    DECLARE_SHARED_PTR(LongComparator)
    DECLARE_SHARED_PTR(LongParser)
    DECLARE_SHARED_PTR(MatchAllDocsQuery)
    DECLARE_SHARED_PTR(MatchAllDocsWeight)
    DECLARE_SHARED_PTR(MatchAllScorer)
    DECLARE_SHARED_PTR(MaxPayloadFunction)
    DECLARE_SHARED_PTR(MinPayloadFunction)
    DECLARE_SHARED_PTR(MultiComparatorsFieldValueHitQueue)
    DECLARE_SHARED_PTR(MultiPhraseQuery)
    DECLARE_SHARED_PTR(MultiSearcher)
    DECLARE_SHARED_PTR(MultiSearcherCallableNoSort)
    DECLARE_SHARED_PTR(MultiSearcherCallableWithSort)
    DECLARE_SHARED_PTR(MultiTermQuery)
    DECLARE_SHARED_PTR(MultiTermQueryWrapperFilter)
    DECLARE_SHARED_PTR(NearSpansOrdered)
    DECLARE_SHARED_PTR(NearSpansUnordered)
    DECLARE_SHARED_PTR(NumericRangeFilter)
    DECLARE_SHARED_PTR(NumericRangeQuery)
    DECLARE_SHARED_PTR(NumericUtilsDoubleParser)
    DECLARE_SHARED_PTR(NumericUtilsIntParser)
    DECLARE_SHARED_PTR(NumericUtilsLongParser)
    DECLARE_SHARED_PTR(OneComparatorFieldValueHitQueue)
    DECLARE_SHARED_PTR(OrdFieldSource)
    DECLARE_SHARED_PTR(ParallelMultiSearcher)
    DECLARE_SHARED_PTR(Parser)
    DECLARE_SHARED_PTR(PayloadFunction)
    DECLARE_SHARED_PTR(PayloadNearQuery)
    DECLARE_SHARED_PTR(PayloadNearSpanScorer)
    DECLARE_SHARED_PTR(PayloadNearSpanWeight)
    DECLARE_SHARED_PTR(PayloadSpanUtil)
    DECLARE_SHARED_PTR(PayloadTermQuery)
    DECLARE_SHARED_PTR(PayloadTermSpanScorer)
    DECLARE_SHARED_PTR(PayloadTermWeight)
    DECLARE_SHARED_PTR(PhrasePositions)
    DECLARE_SHARED_PTR(PhraseQuery)
    DECLARE_SHARED_PTR(PhraseQueue)
    DECLARE_SHARED_PTR(PhraseScorer)
    DECLARE_SHARED_PTR(PositionInfo)
    DECLARE_SHARED_PTR(PositiveScoresOnlyCollector)
    DECLARE_SHARED_PTR(PrefixFilter)
    DECLARE_SHARED_PTR(PrefixQuery)
    DECLARE_SHARED_PTR(PrefixTermEnum)
    DECLARE_SHARED_PTR(PriorityQueueScoreDocs)
    DECLARE_SHARED_PTR(Query)
    DECLARE_SHARED_PTR(QueryTermVector)
    DECLARE_SHARED_PTR(QueryWrapperFilter)
    DECLARE_SHARED_PTR(RelevanceComparator)
    DECLARE_SHARED_PTR(ReqExclScorer)
    DECLARE_SHARED_PTR(ReqOptSumScorer)
    DECLARE_SHARED_PTR(RewriteMethod)
    DECLARE_SHARED_PTR(ReverseOrdFieldSource)
    DECLARE_SHARED_PTR(ScoreCachingWrappingScorer)
    DECLARE_SHARED_PTR(ScoreDoc)
    DECLARE_SHARED_PTR(Scorer)
    DECLARE_SHARED_PTR(ScoreTerm)
    DECLARE_SHARED_PTR(ScoreTermQueue)
    DECLARE_SHARED_PTR(ScoringBooleanQueryRewrite)
    DECLARE_SHARED_PTR(Searchable)
    DECLARE_SHARED_PTR(Searcher)
    DECLARE_SHARED_PTR(Similarity)
    DECLARE_SHARED_PTR(SimilarityDisableCoord)
    DECLARE_SHARED_PTR(SimilarityDelegator)
    DECLARE_SHARED_PTR(SimilarityIDFExplanation)
    DECLARE_SHARED_PTR(SingleMatchScorer)
    DECLARE_SHARED_PTR(SingleTermEnum)
    DECLARE_SHARED_PTR(SloppyPhraseScorer)
    DECLARE_SHARED_PTR(Sort)
    DECLARE_SHARED_PTR(SortField)
    DECLARE_SHARED_PTR(SpanFilter)
    DECLARE_SHARED_PTR(SpanFilterResult)
    DECLARE_SHARED_PTR(SpanFirstQuery)
    DECLARE_SHARED_PTR(SpanNearQuery)
    DECLARE_SHARED_PTR(SpanNotQuery)
    DECLARE_SHARED_PTR(SpanOrQuery)
    DECLARE_SHARED_PTR(SpanQuery)
    DECLARE_SHARED_PTR(SpanQueryFilter)
    DECLARE_SHARED_PTR(SpanQueue)
    DECLARE_SHARED_PTR(Spans)
    DECLARE_SHARED_PTR(SpansCell)
    DECLARE_SHARED_PTR(SpanScorer)
    DECLARE_SHARED_PTR(SpanTermQuery)
    DECLARE_SHARED_PTR(SpanWeight)
    DECLARE_SHARED_PTR(StartEnd)
    DECLARE_SHARED_PTR(StringCache)
    DECLARE_SHARED_PTR(StringComparatorLocale)
    DECLARE_SHARED_PTR(StringIndex)
    DECLARE_SHARED_PTR(StringIndexCache)
    DECLARE_SHARED_PTR(StringOrdValComparator)
    DECLARE_SHARED_PTR(StringValComparator)
    DECLARE_SHARED_PTR(SubScorer)
    DECLARE_SHARED_PTR(TermQuery)
    DECLARE_SHARED_PTR(TermRangeFilter)
    DECLARE_SHARED_PTR(TermRangeQuery)
    DECLARE_SHARED_PTR(TermRangeTermEnum)
    DECLARE_SHARED_PTR(TermScorer)
    DECLARE_SHARED_PTR(TermSpans)
    DECLARE_SHARED_PTR(TimeLimitingCollector)
    DECLARE_SHARED_PTR(TimerThread)
    DECLARE_SHARED_PTR(TopDocs)
    DECLARE_SHARED_PTR(TopDocsCollector)
    DECLARE_SHARED_PTR(TopFieldCollector)
    DECLARE_SHARED_PTR(TopFieldDocs)
    DECLARE_SHARED_PTR(TopScoreDocCollector)
    DECLARE_SHARED_PTR(ValueSource)
    DECLARE_SHARED_PTR(ValueSourceQuery)
    DECLARE_SHARED_PTR(ValueSourceScorer)
    DECLARE_SHARED_PTR(ValueSourceWeight)
    DECLARE_SHARED_PTR(Weight)
    DECLARE_SHARED_PTR(WildcardQuery)
    DECLARE_SHARED_PTR(WildcardTermEnum)
        
    // store
    DECLARE_SHARED_PTR(BufferedIndexInput)
    DECLARE_SHARED_PTR(BufferedIndexOutput)
    DECLARE_SHARED_PTR(ChecksumIndexInput)
    DECLARE_SHARED_PTR(ChecksumIndexOutput)
    DECLARE_SHARED_PTR(Directory)
    DECLARE_SHARED_PTR(FileSwitchDirectory)
    DECLARE_SHARED_PTR(FSDirectory)
    DECLARE_SHARED_PTR(FSLockFactory)
    DECLARE_SHARED_PTR(IndexInput)
    DECLARE_SHARED_PTR(IndexOutput)
    DECLARE_SHARED_PTR(InputFile)
    DECLARE_SHARED_PTR(Lock)
    DECLARE_SHARED_PTR(LockFactory)
    DECLARE_SHARED_PTR(MMapDirectory)
    DECLARE_SHARED_PTR(MMapIndexInput)
    DECLARE_SHARED_PTR(NativeFSLock)
    DECLARE_SHARED_PTR(NativeFSLockFactory)
    DECLARE_SHARED_PTR(NoLock)
    DECLARE_SHARED_PTR(NoLockFactory)
    DECLARE_SHARED_PTR(OutputFile)
    DECLARE_SHARED_PTR(RAMDirectory)
    DECLARE_SHARED_PTR(RAMFile)
    DECLARE_SHARED_PTR(RAMInputStream)
    DECLARE_SHARED_PTR(RAMOutputStream)
    DECLARE_SHARED_PTR(SimpleFSDirectory)
    DECLARE_SHARED_PTR(SimpleFSIndexInput)
    DECLARE_SHARED_PTR(SimpleFSIndexOutput)
    DECLARE_SHARED_PTR(SimpleFSLock)
    DECLARE_SHARED_PTR(SimpleFSLockFactory)
    DECLARE_SHARED_PTR(SingleInstanceLock)
    DECLARE_SHARED_PTR(SingleInstanceLockFactory)
    
    // util
    DECLARE_SHARED_PTR(Attribute)
    DECLARE_SHARED_PTR(AttributeFactory)
    DECLARE_SHARED_PTR(AttributeSource)
    DECLARE_SHARED_PTR(AttributeSourceState)
    DECLARE_SHARED_PTR(BitSet)
    DECLARE_SHARED_PTR(BitVector)
    DECLARE_SHARED_PTR(BufferedReader)
    DECLARE_SHARED_PTR(Collator)
    DECLARE_SHARED_PTR(DefaultAttributeFactory)
    DECLARE_SHARED_PTR(DocIdBitSet)
    DECLARE_SHARED_PTR(FieldCacheSanityChecker)
    DECLARE_SHARED_PTR(FileReader)
    DECLARE_SHARED_PTR(Future)
    DECLARE_SHARED_PTR(HeapedScorerDoc)
    DECLARE_SHARED_PTR(InfoStream)
    DECLARE_SHARED_PTR(InfoStreamFile)
    DECLARE_SHARED_PTR(InfoStreamOut)
    DECLARE_SHARED_PTR(InputStreamReader)
    DECLARE_SHARED_PTR(Insanity)
    DECLARE_SHARED_PTR(IntRangeBuilder)
    DECLARE_SHARED_PTR(LongRangeBuilder)
    DECLARE_SHARED_PTR(LuceneObject)
    DECLARE_SHARED_PTR(LuceneSignal)
    DECLARE_SHARED_PTR(LuceneThread)
    DECLARE_SHARED_PTR(NumericUtils)
    DECLARE_SHARED_PTR(OpenBitSet)
    DECLARE_SHARED_PTR(OpenBitSetDISI)
    DECLARE_SHARED_PTR(OpenBitSetIterator)
    DECLARE_SHARED_PTR(Random)
    DECLARE_SHARED_PTR(Reader)
    DECLARE_SHARED_PTR(ReaderField)
    DECLARE_SHARED_PTR(ScorerDocQueue)
    DECLARE_SHARED_PTR(SortedVIntList)
    DECLARE_SHARED_PTR(StringReader)
    DECLARE_SHARED_PTR(Synchronize)
    DECLARE_SHARED_PTR(ThreadPool)
    DECLARE_SHARED_PTR(UnicodeResult)
    DECLARE_SHARED_PTR(UTF8Decoder)
    DECLARE_SHARED_PTR(UTF8DecoderStream)
    DECLARE_SHARED_PTR(UTF8Encoder)
    DECLARE_SHARED_PTR(UTF8EncoderStream)
    DECLARE_SHARED_PTR(UTF8Result)
    DECLARE_SHARED_PTR(UTF8Stream)
    DECLARE_SHARED_PTR(UTF16Decoder)
}

#endif
