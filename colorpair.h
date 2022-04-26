#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <stdio.h>
#include <assert.h>

#define COLORNORMAL  "\x1B[0m"
#define COLORRED  "\x1B[31m"
#define COLORGRN  "\x1B[32m"
#define COLORYEL  "\x1B[33m"
#define COLORBLU  "\x1B[34m"
#define COLORMAG  "\x1B[35m"
#define COLORCYN  "\x1B[36m"
#define COLORWHT  "\x1B[37m"

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const int MAX_COLORPAIR_NAME_CHARS;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);






