#include "limits.h"

typedef struct {
    int kapacitas;
    int ar;
} Ssd;

Ssd legolcsobb (Ssd tomb[], int meret) {
    double legjarany = INT_MAX;
    Ssd legjobb;

    for (int i = 0; i < meret; ++i) {
        if (((double)tomb[i].ar / tomb[i].kapacitas) < (double)legjarany) {
           legjarany = ((double)tomb[i].ar / tomb[i].kapacitas);
           legjobb = tomb[i];
        }
    }

    return legjobb;
}