#include <stdlib.h>

typedef struct {
    const char* hallgato;
    unsigned pontszam;
} Zh;

double atlag(Zh** zh) {
    double atlag = 0;

    int i;
    for (i = 0; zh[i] != NULL ; ++i) {
        atlag += zh[i]->pontszam;
    }

    return atlag / i;
}