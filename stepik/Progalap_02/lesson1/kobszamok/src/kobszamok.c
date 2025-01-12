#include "stdio.h"

int kob (int alja, int teteje) {
    int osszeg = 0;
    for (int i = 0; i <= teteje; ++i) {
        if (i*i*i<=teteje && i*i*i>=alja){
            printf("%d\n", i*i*i);
            osszeg += i*i*i;
        }
    }
    return osszeg;
}