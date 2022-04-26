#include <stdio.h>
#include <assert.h>
#include "colorpair.h"

void colorMapperManual()
{
 	  int pairNumber=0; 
    ColorPair colorPair;
     for(int MajorpairNumber=1; MajorpairNumber<numberOfMajorColors; MajorpairNumber++)
     {
        for(int MinorpairNumber=1; MinorpairNumber<numberOfMinorColors; MinorpairNumber++)
        {
            ++pairNumber;
            colorPair = GetColorFromPairNumber(pairNumber);
            printf(COLORBLU"PairNumber:"COLORNORMAL"%d----->"COLORRED"MajorColor:"COLORNORMAL "%s""----->"COLORYEL"MinorColor:"COLORNORMAL"%s\n", pairNumber,MajorColorNames[colorPair.majorColor],MinorColorNames[colorPair.minorColor]);
       }
     }
}
