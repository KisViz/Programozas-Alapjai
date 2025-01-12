#include "stdio.h"
#include "stdlib.h"

int main(){
///---sorok, oszlopok megszamolasa-------------
    FILE *be = fopen("be.txt", "r");
    int sorPoz, oszlopPoz;
    fscanf(be, "%d,%d\n", &sorPoz, &oszlopPoz);
    int sorok = 0, oszlopok = 0;

    int vege = 0;
    char betu;
    while (!feof(be)){
        fscanf(be, "%c", &betu);
        if(betu == ',' && !vege) {
            oszlopok++;
        }
        if(betu == '\n') {
            sorok++;
            vege = 1;
        }
    }
    sorok -= 2;
    oszlopok++;
//    printf("%d %d", sorok, oszlopok);
    fclose(be);

///---matrix letrehozasa, adatok matrixba tetele----------------------
    int** matrix = (int**)malloc(sizeof(int*) * sorok * oszlopok);
    for (int i = 0; i < sorok; ++i) {
        matrix[i] = (int*)malloc(sizeof(int) * oszlopok);
    }

    be = fopen("be.txt", "r");
    fscanf(be, "%d,%d\n", &sorPoz, &oszlopPoz);

    for(int i = 0; i < sorok;i++){
        for (int j = 0; j < oszlopok-1; ++j) {
            fscanf(be,"%d,", &matrix[i][j]);
        }
        fscanf(be,"%d\n", &matrix[i][oszlopok-1]);
    }
/*    for (int i = 0; i < sorok; ++i) {
        for (int j = 0; j < sorok; ++j) {
            printf("%d ", matrix[i][j]);
        }
        putchar('\n');
    }*/

    fclose(be);

///---feladat megoldasa-------------------------------------------

    int eindex = 0;
    int* eredmeny = (int*)malloc(sizeof(int) * sorok * oszlopok);

//    sorok--; //azert mert nullatol indexelunk es nem akarok mindig egyet kivonogatni:)
//    oszlopok--; //ez is ^
    sorPoz--; //azert mert nullatol indexelunk es nem akarok mindig egyet kivonogatni:)
    oszlopPoz--; //same ^

    if( (sorPoz >= 0 && sorPoz < sorok) && (oszlopPoz >= 0 && oszlopPoz < oszlopok) ) { //a matrixon belul van-e a kezdopont
        eredmeny[eindex] = matrix[sorPoz][oszlopPoz];
        printf("nulla: %d\n", matrix[sorPoz][oszlopPoz]);
        eindex++;
    }

    for (int i = 1; eindex != sorok * oszlopok; ++i) {

        if(i % 2 == 0) {
            int tart = sorPoz + i;
            sorPoz++;

            for (sorPoz; sorPoz <= tart; sorPoz++) {

                if( (sorPoz >= 0 && sorPoz < sorok) && (oszlopPoz >= 0 && oszlopPoz < oszlopok) ) {
                    eredmeny[eindex] = matrix[sorPoz][oszlopPoz];
                    printf("egy: %d\n", matrix[sorPoz][oszlopPoz]);
                    eindex++;
                }
            }
            sorPoz--;

            tart = oszlopPoz + i;
            oszlopPoz++;

            for(oszlopPoz; oszlopPoz <= tart; oszlopPoz++) {

                if( (sorPoz >= 0 && sorPoz < sorok) && (oszlopPoz >= 0 && oszlopPoz < oszlopok) ) {
                    eredmeny[eindex] = matrix[sorPoz][oszlopPoz];
                    printf("ketto: %d\n", matrix[sorPoz][oszlopPoz]);
                    eindex++;
                }
            }
            oszlopPoz--;
        } else {
            int tart = sorPoz - i;
            sorPoz--;

            for(sorPoz; sorPoz >= tart; sorPoz--) {

                if( (sorPoz >= 0 && sorPoz < sorok) && (oszlopPoz >= 0 && oszlopPoz < oszlopok) ) {
                    eredmeny[eindex] = matrix[sorPoz][oszlopPoz];
                    printf("harom: %d\n", matrix[sorPoz][oszlopPoz]);
                    eindex++;
                }
            }
            sorPoz++;

            tart = oszlopPoz - i;
            oszlopPoz--;

            for(oszlopPoz; oszlopPoz >= tart; oszlopPoz--) {

                if( (sorPoz >= 0 && sorPoz < sorok) && (oszlopPoz >= 0 && oszlopPoz < oszlopok) ) {
                    eredmeny[eindex] = matrix[sorPoz][oszlopPoz];
                    printf("negy: %d\n", matrix[sorPoz][oszlopPoz]);
                    eindex++;
                }
            }
            oszlopPoz++;
        }
    }

//    negy: 1
//    egy: 0


///---kiiratas :) --------------------------------------

    FILE *ki = fopen("ki.txt", "w");
    for (int i = 0; i < (sorok * oszlopok) - 1; ++i) {
        fprintf(ki, "%d,", eredmeny[i]);
    }
    if(sorok * oszlopok > 0) {
        fprintf(ki, "%d", eredmeny[(sorok * oszlopok) - 1]);
    }
    fprintf(ki,"\n");



///---memoria felszabaditasa, return--------------------------------------------
    free(eredmeny);
    for (int i = 0; i < sorok; ++i) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}