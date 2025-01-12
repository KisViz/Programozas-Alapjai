#include <stdio.h>

void szamolas(int start, int end, int diff) {
    int vege = start;
    printf("%d ", vege);
    while (vege+diff <= end){
        vege += diff;
        printf("%d ", vege);
    }
}