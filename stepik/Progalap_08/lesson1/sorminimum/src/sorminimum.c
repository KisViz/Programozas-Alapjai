#include <limits.h>

int minimum(const int* tomb, int sorok, int oszlopok) {

    int index, sorminimum = INT_MAX;

    for (int i = 0; i < sorok; ++i) {
        int osszeg = 0;
        for (int j = 0; j < oszlopok; ++j) {
            osszeg += tomb[i * oszlopok + j];
        }
        if (osszeg < sorminimum) {
            sorminimum = osszeg;
            index = i;
        }
    }

    return index;
}