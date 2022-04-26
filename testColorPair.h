#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include <stdio.h>
#include <assert.h>
#include "colorPair.h"

void testNumberToPair( int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif
