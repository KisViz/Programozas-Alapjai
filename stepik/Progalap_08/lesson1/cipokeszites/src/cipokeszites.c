#include <stdlib.h>
#include <string.h>

typedef struct {
    char szin[100];
    int meret;
} Cipo;

Cipo* cipokeszites(int darab, const char* szin, int meret) {
    Cipo* cipok = (Cipo*)malloc(sizeof(Cipo) * darab);

    for (int i = 0; i < darab; ++i) {
        cipok[i].meret = meret;
        strcpy(cipok[i].szin, szin);
    }

    return cipok;

    // megoldas
}