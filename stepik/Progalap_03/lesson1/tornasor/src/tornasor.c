#include "limits.h"

int torna (int magassag[], int letszam){
    int rendezett[letszam];
    for (int i = 0; i < letszam; ++i) {
        int legkisebb = INT_MAX;
        int index = 0;
        for (int j = 0; j < letszam; ++j) {
            if (magassag[j] < legkisebb){
                legkisebb = magassag[j];
                index = j;
            }
        }
        magassag[index] = INT_MAX;
        rendezett[i] = legkisebb;
    }
    /*printf("%d \n", (5/2)+1);
    printf("%d\n", 7/2);

    for (int i = 0; i < letszam; ++i) {
        printf("%d ",rendezett[i]);
    }*/

    if (letszam % 2 == 0) {
        return (rendezett[letszam/2] + rendezett[(letszam/2) - 1])/2;
    } else {
        return rendezett[letszam / 2];
    }


}