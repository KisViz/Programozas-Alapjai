#include <stdio.h>

void szamtani(int kezdoelem, int kulonbseg, int mennyiseg) {
    int count = 0;
    do {
        printf("%d\n", kezdoelem);
        kezdoelem += kulonbseg;
        count++;
    } while (count < mennyiseg);
}