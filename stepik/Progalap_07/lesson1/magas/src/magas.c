#include <stdlib.h>

typedef struct {
    const char* fajta;
    unsigned magassag;
} Karacsonyfa;

Karacsonyfa* magasabb(Karacsonyfa* fa1, Karacsonyfa* fa2) {
    return fa1->magassag > fa2->magassag ? fa1 : fa2->magassag > fa1->magassag ? fa2 : NULL;
}