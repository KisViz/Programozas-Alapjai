#include "stdio.h"

typedef struct {
    int ora;
    int perc;
}Ido ;

Ido ido (int ora, int perc) {
    Ido uj;
    uj.ora = ora;
    uj.perc = perc;
    return uj;
}

Ido telik (Ido kezdeti, int perc) {
    Ido uj;
    int ido = (kezdeti.ora * 60) + kezdeti.perc + perc;
    while (ido > 1440) {
        ido -= 1440;
    }
    uj.ora = ido / 60;
    uj.perc = ido % 60;
    return uj;
}

void megjelenit (Ido kapott) {
    if(kapott.ora < 10) {
        printf("0%d:", kapott.ora);
    } else {
        printf("%d:",kapott.ora);
    }

    if(kapott.perc < 10) {
        printf("0%d", kapott.perc);
    } else {
        printf("%d",kapott.perc);
    }
}