#include <stdlib.h>
#include "string.h"

typedef struct {
    int meret;
    char szin;
} Kavics;

const Kavics* kavicsKreacio (int meret, char szin) {
    Kavics *uj = (Kavics*) malloc(sizeof (Kavics));
    uj->meret = meret;
    uj->szin = szin;
    return uj;

}