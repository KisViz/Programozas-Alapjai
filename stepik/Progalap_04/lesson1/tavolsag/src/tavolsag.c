#include "math.h"

typedef struct {
    double x;
    double y;
} Pozicio;

typedef struct {
    char nev[100];
    int eletkor;
    Pozicio pozicio;
} Ember;

int szabalyos (Ember tomb[], int meret) {
    double xnegyzet;
    double ynegyzet;
    for (int i = 0; i < meret-1; ++i) {
        for (int j = i+1; j < meret; ++j) {
            if (tomb[j].pozicio.x > tomb[i].pozicio.x) {
                xnegyzet = (tomb[j].pozicio.x - tomb[i].pozicio.x) * (tomb[j].pozicio.x - tomb[i].pozicio.x);
            } else {
                xnegyzet = (tomb[i].pozicio.x - tomb[j].pozicio.x) * (tomb[i].pozicio.x - tomb[j].pozicio.x);
            }

            if (tomb[j].pozicio.y > tomb[i].pozicio.y) {
                ynegyzet = (tomb[j].pozicio.y - tomb[i].pozicio.y) * (tomb[j].pozicio.y - tomb[i].pozicio.y);
            } else {
                ynegyzet = (tomb[i].pozicio.y - tomb[j].pozicio.y) * (tomb[i].pozicio.y - tomb[j].pozicio.y);
            }

            if (sqrt(xnegyzet  + ynegyzet) < 1.5) {
                return 0;
            }
        }
    }

    return 1;
}