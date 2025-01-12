#include <stdlib.h>
#include <string.h>

typedef struct {
    char eloado[100];
    char cim[100];
    unsigned int hossz;
} Zene;

Zene* hosszu(Zene* zenek[], int darabszam, const char* elvartEloado) {
    Zene *maxzene = NULL;

    for (int i = 0; i < darabszam; ++i) {
        if(maxzene != NULL && !strcmp(elvartEloado, zenek[i]->eloado) && zenek[i]->hossz > maxzene->hossz) {
            maxzene = zenek[i];
        } else if (maxzene == NULL && !strcmp(elvartEloado, zenek[i]->eloado)) {
            maxzene = zenek[i];
        }
    }
    return maxzene;
}
