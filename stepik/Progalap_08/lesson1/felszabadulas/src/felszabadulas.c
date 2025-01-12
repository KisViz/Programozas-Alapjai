#include "stdlib.h"

void felszabadulas (int** tomb, int sor, int oszlop) {
    for (int i = 0; i < sor; ++i) {
        free(tomb[i]);
    }
    free(tomb);
}

