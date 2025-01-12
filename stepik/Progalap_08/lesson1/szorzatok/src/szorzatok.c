#include <stdlib.h>

int* szorzatok (const int* tomb, int sor, int oszlop) {
    int* eredmenyek = (int*) malloc(sizeof(int) * oszlop);

    for (int i = 0; i < oszlop; ++i) {
        eredmenyek[i] = 1;
    }

    for (int i = 0; i < sor; ++i) {
        for (int j = 0; j < oszlop; ++j) {
            int ertek = tomb[i*oszlop+j];
            eredmenyek[j] *= ertek;
        }
    }

    return eredmenyek;
}

// megoldas