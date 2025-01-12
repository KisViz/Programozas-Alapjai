#include "stdio.h"

int osztas (int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Hibas ertekek!\n");
        return 0;
    } else {
        return a/b;
    }
}