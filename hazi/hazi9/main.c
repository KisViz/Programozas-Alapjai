#include "stdio.h"
int sorok, oszlopok;
int keres(char matrixmatrix[sorok][oszlopok], int tavolsag, int sor, int oszlop, char a);
int main(){
    /////////////////////////////////////////////////////////////////////////////////////////////////
    FILE *bemenet = fopen("be.txt", "r");
    int hegyTavolsag, vizTavolsag, homokTavolsag;
    fscanf(bemenet, "%d %d %d\n", &hegyTavolsag, &vizTavolsag, &homokTavolsag);
    fscanf(bemenet, "%d %d\n", &sorok, &oszlopok);
    char matrix[sorok][oszlopok];
    for (int i = 0; i < sorok; ++i) {
        fscanf(bemenet, "%s\n", matrix[i]);
    }
    fclose(bemenet);
    /////////////////////////////////////////////////////////////////////////////////////////////////

    int eredmeny = 0;

    for (int i = 0; i < sorok; ++i) {
        for (int j = 0; j < oszlopok; ++j) {
            if(matrix[i][j] == '~' || matrix[i][j] == '0'){
                int viz = keres(matrix, vizTavolsag, i, j, '~');
                int hegy = keres(matrix, hegyTavolsag, i, j, 'A');
                int homok = keres(matrix, homokTavolsag, i, j, 'X');
//                printf("%d && %d      %d\n", hegy, viz, homok);
                if((viz == 1 && hegy == 1) && homok == 0){
                    eredmeny++;
                }
            }
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////

    printf("%d", eredmeny);

    FILE* kimenet = fopen("ki.txt","w");
    fprintf(kimenet,"%d\n", eredmeny);
    fclose(kimenet);
    return 0;
}

int keres(char matrix[sorok][oszlopok], int tavolsag, int sor, int oszlop, char a){

    for (int i = sor-tavolsag; i <= sor+tavolsag; ++i) {
        for (int j = oszlop-tavolsag; j <= oszlop+tavolsag; ++j) {
            if((i >= 0 && i < sorok) && (j >= 0 && j < oszlopok)){
                if(matrix[i][j] == a){
                    return 1;
                }
            }
        }
    }
    return 0;
}





