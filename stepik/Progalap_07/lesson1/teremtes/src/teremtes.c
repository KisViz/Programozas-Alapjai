#include <stdlib.h>

int* letrehoz (int a) {
    int *b = (int*)malloc(sizeof(int));
    *b = a;
    return b;
}