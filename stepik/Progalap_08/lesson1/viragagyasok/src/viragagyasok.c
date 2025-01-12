#include <stdlib.h>

int* ultet(int sor, int darabszam) {
    int* agyas = (int*) malloc(sizeof(int) * sor * darabszam);

    for (int i = 0; i < sor; ++i) {
        for (int j = 0; j < darabszam; ++j) {
            agyas[i*darabszam+j] = i%2;
        }
    }


    return agyas;
}