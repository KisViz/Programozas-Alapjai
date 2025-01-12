#include "stdio.h"

int main () {
    double tonna = 0;
    double osszeg = 0;
    while (1) {
        scanf("%lf", &tonna);
        if ((osszeg + tonna) < 16) {
            osszeg += tonna;
        } else {
            osszeg += tonna;
            break;
        }
    }
    printf("vege a munkanak, kitermelt szen: %.2lf tonna!\n", osszeg);
}