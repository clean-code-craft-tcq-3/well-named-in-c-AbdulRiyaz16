#include <stdio.h>
#include <assert.h>
#include "colorpair.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void colorMapperManual()
{
 	 ColorPair colorPair;
     for(int MajorpairNumber=1; MajorpairNumber<numberOfMajorColors; MajorpairNumber++)
     {
        for(int MinorpairNumber=1; MinorpairNumber<numberOfMinorColors; MinorpairNumber++)
        {

         colorPair = GetColorFromPairNumber(MinorpairNumber);
         printf(COLORBLU"PairNumber:"COLORNORMAL"%d----->"COLORRED"MajorColor:"COLORNORMAL "%s""----->"COLORYEL"MinorColor:"COLORNORMAL"%s\n", MinorpairNumber,MajorColorNames[colorPair.majorColor],MinorColorNames[colorPair.minorColor]);
       }
     }
}

int main() {
    colorMapperManual();
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
