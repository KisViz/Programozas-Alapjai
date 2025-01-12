#include "stdio.h"
#include "stdlib.h"



#define hegyJel 'A'
#define vizJel '~'
#define viharJel 'X'

int kereses(char** terkep, int tav, int sor, int oszlop, char jel, int sorok, int oszlopok);

int main() {
///---be.txt beolvasasa----------------------

    FILE *be = fopen("be.txt", "r");

    int hegyTav, vizTav, viharTav; //ertekek beolvasasa es tarolasa
    fscanf(be, "%d %d %d\n", &hegyTav, &vizTav, &viharTav);
    int sorok, oszlopok;
    fscanf(be, "%d %d\n", &sorok, &oszlopok);
//    printf("%d %d %d %d %d", hegy, viz, vihar, sor, oszlop);

    char** terkep = (char**) malloc(sizeof(char*) * sorok * oszlopok); //terkep letrehozasa es feltoltese
    for (int i = 0; i < sorok; ++i) {
        terkep[i] = (char*) malloc(sizeof(char)* oszlopok);
    }
    for (int i = 0; i < sorok; ++i) {
        fscanf(be, "%s\n", terkep[i]);
//        printf("%s\n", terkep[i]);
    }

    fclose(be);

///---feladat megoldasa----------------------

    int eredmeny = 0; //ez lesz a vegeredmeny
    for (int i = 0; i < sorok; ++i) { //vegigmegyunk a terkepen
        for (int j = 0; j < oszlopok; ++j) {
            if(terkep[i][j] == '~' || terkep[i][j] == '0') { //es ha ures vagy viz, akkor ellenorizzuk a felteteleket
                int adottViz = kereses(terkep, vizTav, i, j ,vizJel, sorok, oszlopok);
                int adottHegy = kereses(terkep, hegyTav, i, j, hegyJel, sorok, oszlopok);
                int adottVihar = kereses(terkep, viharTav, i, j, viharJel, sorok, oszlopok);
//                printf("%d && %d      %d\n", adottHegy, adottViz, adottVihar);
                eredmeny += ( (adottHegy == 1 && adottViz == 1) && adottVihar == 0 ) ? 1 : 0;
            }
        }
    }

//    printf("%d", eredmeny);
///---ki.txt kiirasa-------------------------

    FILE *ki = fopen("ki.txt", "w");
    fprintf(ki, "%d\n", eredmeny);
    fclose(ki);

///---memoria felszabaditasa, return---------

    for (int i = 0; i < sorok; ++i) {
        free(terkep[i]);
    }
    free(terkep);
    return 0;
}

int kereses(char** terkep, int tav, int sor, int oszlop, char jel, int sorok, int oszlopok){

    for (int i = sor-tav; i <= sor+tav; ++i) {
        for (int j = oszlop-tav; j <= oszlop+tav; ++j) {
            if((i >= 0 && i < sorok) && (j >= 0 && j < oszlopok)){ //fontos
                if(terkep[i][j] == jel){
                    return 1;
                }
            }
        }
    }
    return 0;
}