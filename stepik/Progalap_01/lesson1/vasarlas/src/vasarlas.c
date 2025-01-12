#include <stdio.h>

int vasarlas(int osszeg, int penz) {
    if (osszeg<=penz){
        return 1;
    } else {
        //return 0;
        printf("Irma neni, sajnos nincs eleg penze!");
    }
    return 0;
}