#include "stdio.h"
#include "stdlib.h"

int main () {
    //---------------------------------------------------------------------------
    //beolvasas

    FILE *be = fopen("be.txt", "r");

    int sor = 0, oszlop = 0;
    fscanf(be, "%d %d", &sor, &oszlop); //elvileg jo

    int tomb[sor][oszlop];
    for (int i = 0; i < sor; ++i) {
        for (int j = 0; j < oszlop; ++j) {
            fscanf(be, "%d ", &tomb[i][j]);
        }
    } //tuti jo

    fclose(be);

    //---------------------------------------------------------------------------
    //raketak meghatarozasa

    int pozicio = 0;
    for (int i = oszlop - 1; i >= 0; --i) {
        if (tomb[0][i] == 1) {
            pozicio = i;
        }
    } //tuti jo

    int raketa = 0;

    for (int i = 0; i < sor; ++i) {
        int meteorSzaml = 0;

        for (int j = 0; j < oszlop; ++j) { //megszamolom a meteorokat sz adott sorban
            if (tomb[i][j] == 1) {
                meteorSzaml++;
            }
        }

        if (meteorSzaml == 1) { //ha csak 1 meteor van megnezem, hogy pont ott all-e a robi, ha igen akkor semmi, ha nem akkor szenvedes

            int ugyanott = 0;
            for (int j = 0; j < oszlop; ++j) {
                if (j == pozicio && tomb[i][j] == 1) {
                    ugyanott++; //ha azon a helyen all, ahova jon a meteor akkor novelem
                    //printf("%d. sor, pozicio: %d, meteor pozicio: %d\traketak: %d\n", i+2, pozicio, j, raketa);
                }
            }

            if (ugyanott == 0) { //ha nem ugyanott vannak akkor megkeresem a meteor indexet

                int meteorIndex;
                for (int j = 0; j < oszlop; ++j) {

                    if (tomb[i][j] == 1) {
                        meteorIndex = j;
                    }
                }

                if (meteorIndex < pozicio) { //elmozditom a meteor fele
                    pozicio = pozicio - 1;
                } else if (meteorIndex > pozicio) {
                    pozicio = pozicio + 1;
                }

                //ha ezutan ugyanott vannak akkor nem kell raketa, egyebkent igen
                if (pozicio != meteorIndex) {
                    raketa = raketa + 1;
                }
                //printf("%d. sor, pozicio: %d, meteor pozicio: %d\traketak: %d\n", i+2, pozicio, meteorIndex, raketa);
            }


        } else if (meteorSzaml > 1) { //ha tobb meteor van megnezem, hogy mellette szotyi van

            if (pozicio > 0 && pozicio < oszlop - 1 && tomb[i][pozicio - 1] == 1 && tomb[i][pozicio + 1] == 1 &&
                tomb[i][pozicio] == 1) {
                //ha mind a ket oldalt van mellette akkor nem mozdul, azok a meteorok becsapodnak, de ha pont megy oda is ahol all, az nem
                raketa += meteorSzaml - 1;
            } else if (pozicio > 0 && pozicio < oszlop - 1 && tomb[i][pozicio - 1] == 1 && tomb[i][pozicio + 1] == 1 &&
                       tomb[i][pozicio] == 0) {
                //ha mind a ket oldalt van mellette akkor nem mozdul, azok a meteorok becsapodnak, de ha pont nem megy oda ahol all
                raketa += meteorSzaml;
            } else { //egyebkent meg mozogni kene

                int jobb = 0, bal = 0;
                for (int j = 0;
                     j < oszlop; ++j) { //ugy tudom, hogy jobbrol vagy balrol van-e, hogy kiseb vagy nagyobb az indexe

                    if (tomb[i][j] == 1 && j < pozicio) {
                        bal++;
                    } else if (tomb[i][j] == 1 && j > pozicio) {
                        jobb++;
                    }
                }


                if (bal > jobb && tomb[i][pozicio] == 1) {
                    raketa += meteorSzaml - 1;
                } else if (bal > jobb && tomb[i][pozicio] == 0) {
                    pozicio--;

                    if (tomb[i][pozicio] == 1) {
                        raketa += meteorSzaml - 1;
                    } else {
                        raketa += meteorSzaml;
                    }
                } else if (jobb > bal && tomb[i][pozicio] == 1) {
                    raketa += meteorSzaml - 1;
                } else if (jobb > bal && tomb[i][pozicio] == 0) {
                    pozicio++;

                    if (tomb[i][pozicio] == 1) {
                        raketa += meteorSzaml - 1;
                    } else {
                        raketa += meteorSzaml;
                    }
                } else if (jobb = bal && tomb[i][pozicio] == 1) {
                    raketa += meteorSzaml - 1;
                } else if (jobb = bal && tomb[i][pozicio] == 0) {
                    raketa += meteorSzaml;
                }
                //printf("%d. sor, pozicio: %d, bal: %d jobb: %d\traketak: %d\n", i+2, pozicio, bal, jobb, raketa);
            }
        }
    }

    //---------------------------------------------------------------------------
    //ki.txt -be iras

    FILE *ki = fopen("ki.txt", "w");
    fprintf(ki, "%d\n", raketa);
    fclose(ki);
    printf("%d", raketa);


    return 0;
}