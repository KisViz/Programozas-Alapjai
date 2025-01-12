#include "stdlib.h"

int* letrehoz(int meret) {
    return (int*) malloc(meret * sizeof(int));
}