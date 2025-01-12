#include "stdlib.h"

const int* nagyobb(const int* a, const int* b) {
    return *a > *b ? a : *b > *a ? b : NULL;
}