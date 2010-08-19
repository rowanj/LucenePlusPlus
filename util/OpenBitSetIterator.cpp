/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2010 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "OpenBitSetIterator.h"
#include "OpenBitSet.h"

namespace Lucene
{
    OpenBitSetIterator::OpenBitSetIterator(OpenBitSetPtr bitSet) : DocIdBitSetIterator(bitSet->getBitSet())
    {
    }
    
    OpenBitSetIterator::~OpenBitSetIterator()
    {
    }
}