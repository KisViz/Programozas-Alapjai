#include <stdlib.h>

int** tablatKeszit(int sor, int oszlop) {
    int** tabla = (int**) malloc(sizeof(int) * sor);

    for (int i = 0; i < sor; i++) {
        tabla[i] = (int*) malloc(sizeof(int) * oszlop);
        for (int j = 0; j < oszlop; j++) {
            tabla[i][j] = 0;
        }
    }

    return tabla;
}