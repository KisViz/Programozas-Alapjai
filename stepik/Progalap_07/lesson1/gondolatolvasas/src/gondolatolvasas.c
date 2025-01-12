#include <stdio.h>

int gondolatolvas(int* a) {
    int eredmeny = *a**a;
    while (*(a++)) {
        eredmeny += *a;
    }
    return eredmeny;
}

int nulla(int tomb[]) {
    int meret = 3;

    int i;
    for (i = 0; i < meret; ++i) {
        tomb[i] = 0;
    }

    if (gondolatolvas(tomb) != 0) {
        printf("%d", gondolatolvas(tomb));
    }

    return meret;
}

int tizenharom(int tomb[]) {
    int meret = 3;
    tomb[0] = 1;
    tomb[1] = 12;
    tomb[2] = 0;

    if (gondolatolvas(tomb) != 13) {
        printf("%d", gondolatolvas(tomb));
    }

    return meret;
}