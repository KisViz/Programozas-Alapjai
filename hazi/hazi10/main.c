#include "stdio.h"

int main(){

    int aktSor, aktOszlop;
    int sorok = 0, oszlopok = 0;

    /////////////////////////////////////////////////////////////////////////
    //////////// SOROK ÉS OSZLOPOK SZÁMÁNAK MEGÁLLAPÍTÁSA //////////////////

    FILE *bemenet = fopen("be.txt", "r");
    fscanf(bemenet,"%d,%d\n", &aktSor, &aktOszlop);
    char a;
    int vege = 0;
    while(fscanf(bemenet,"%c", &a) != EOF){
        if(a == ',' && vege == 0)
            oszlopok++;
        else if(a == '\n'){
            vege = 1;
            sorok++;
        }
    }
    oszlopok++;
    sorok--;
//    printf("%d %d", sorok, oszlopok);
    fclose(bemenet);

    /////////////////////////////////////////////////////////////////////////
    ////////////////////// ADATOK BEOLVASÁSA ///////////////////////////////

    int matrix[sorok][oszlopok];
    bemenet = fopen("be.txt", "r");
    fscanf(bemenet,"%d,%d\n", &aktSor, &aktOszlop);
    for(int k = 0; k < sorok;k++){
        for (int i = 0; i < oszlopok-1; ++i) {
            fscanf(bemenet,"%d,", &matrix[k][i]);
        }
        fscanf(bemenet,"%d\n", &matrix[k][oszlopok-1]);
    }
    fclose(bemenet);
    sorok--;
    oszlopok--;
    aktSor--;
    aktOszlop--;

    ////////////////////////////////////////////////////////////////////////
    ////////////////////////// EREDMÉNY TÖMB //////////////////////////////

    int elemekSzama = (sorok+1)*(oszlopok+1);
    int eredmeny[elemekSzama];
    int eredmenyIndex = 0;

    ////////////////////////////////////////////////////////////////////////
    /////////////////// KIINDULÓPONT MEGVIZSGÁLÁSA ////////////////////////


    if((aktSor <= sorok && aktSor >= 0) && (aktOszlop <= oszlopok && aktOszlop >= 0)){
        eredmeny[eredmenyIndex] = matrix[aktSor][aktOszlop];
        eredmenyIndex++;
    }

    ////////////////////////////////////////////////////////////////////////
    ///////////////////////////// FŐCIKLUS ////////////////////////////////

    for (int i = 1; eredmenyIndex != elemekSzama; ++i) {
        if(i % 2 != 0){
            int temp = aktSor-i;
            aktSor--;
            for (aktSor; aktSor >= temp; aktSor--) {
                if((aktSor <= sorok && aktSor >= 0) && (aktOszlop <= oszlopok && aktOszlop >= 0)){
                    eredmeny[eredmenyIndex] = matrix[aktSor][aktOszlop];
                    printf("harom: %d\n", matrix[aktSor][aktOszlop]);
                    eredmenyIndex++;
                }
            }
            aktSor++;
            temp = aktOszlop-i;
            aktOszlop--;
            for (aktOszlop; aktOszlop >= temp; aktOszlop--) {
                if((aktSor <= sorok && aktSor >= 0) && (aktOszlop <= oszlopok && aktOszlop >= 0)){
                    eredmeny[eredmenyIndex] = matrix[aktSor][aktOszlop];
                    printf("negy: %d\n", matrix[aktSor][aktOszlop]);
                    eredmenyIndex++;
                }
            }
            aktOszlop++;
        }else{
            int temp = aktSor+i;
            aktSor++;
            for (aktSor; aktSor <= temp; aktSor++) {
                if((aktSor <= sorok && aktSor >= 0) && (aktOszlop <= oszlopok && aktOszlop >= 0)){
                    eredmeny[eredmenyIndex] = matrix[aktSor][aktOszlop];
                    printf("egy: %d\n", matrix[aktSor][aktOszlop]);
                    eredmenyIndex++;
                }
            }
            aktSor--;
            temp = aktOszlop+i;
            aktOszlop++;
            for (aktOszlop; aktOszlop <= temp; aktOszlop++) {
                if((aktSor <= sorok && aktSor >= 0) && (aktOszlop <= oszlopok && aktOszlop >= 0)){
                    eredmeny[eredmenyIndex] = matrix[aktSor][aktOszlop];
                    printf("ketto: %d\n", matrix[aktSor][aktOszlop]);
                    eredmenyIndex++;
                }
            }
            aktOszlop--;
        }

    }

    ////////////////////////////////////////////////////////////////////////
    ////////////////////////////// KIÍRATÁS ////////////////////////////////

    FILE *kimenet = fopen("ki.txt","w");
    for (int i = 0; i < elemekSzama-1; ++i) {
        fprintf(kimenet,"%d,", eredmeny[i]);
    }
    if(elemekSzama > 0){
        fprintf(kimenet,"%d", eredmeny[elemekSzama-1]);
    }
    fprintf(kimenet,"\n");

    return 0;
}