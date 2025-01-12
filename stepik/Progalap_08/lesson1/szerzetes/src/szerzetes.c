#include "stdlib.h"
#include "string.h"

const char* masolat(const char* eredeti) {
    char* masolt = (char*) malloc(sizeof(char)* strlen(eredeti) + 1);
    strcpy(masolt, eredeti);
    return masolt;
}

