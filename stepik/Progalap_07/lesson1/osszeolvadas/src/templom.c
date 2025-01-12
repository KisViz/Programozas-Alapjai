#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char* nev;
    unsigned int szuletesi_evszam;
} Ember;

typedef struct {
    const char* nev;
    unsigned int meret;
} Templom;

typedef struct {
    Templom* templom;
    Ember* emberek;
    unsigned int lakossag;
} Varos;

Varos varosEgyesites(const Varos* const varosok[]) {
    Varos ujvaros;

    //lakossag
    ujvaros.lakossag = 0;
    int varosSzam = 0;
    while (varosok[varosSzam] != NULL){
        ujvaros.lakossag += varosok[varosSzam]->lakossag;
        varosSzam++;
    }


    //emberek
    Ember* emberek = (Ember*) malloc(sizeof(Ember) * ujvaros.lakossag);
    int aktualis = 0;
    for (int i = 0; i < varosSzam; i++) {
        for (int j = 0; j < varosok[i]->lakossag; j++) {
            emberek[aktualis] = varosok[i]->emberek[j];
            aktualis++;
        }
    }
    ujvaros.emberek = emberek;

    // templom
    Templom* legjobb = NULL;
    for (int i = 0; i < varosSzam; i++) {
        if (varosok[i]->templom != NULL) {
            if (legjobb == NULL) {
                legjobb = varosok[i]->templom;
            } else if (varosok[i]->templom->meret > legjobb->meret) {
                legjobb = varosok[i]->templom;
            }
        }
    }
    ujvaros.templom = legjobb;

    return ujvaros;
}
