typedef struct {
    unsigned int eletero;
    unsigned int sebzes;
} Katona;


void tamadas (const Katona *tamado, Katona *vedo) {
    if (tamado->eletero == 0) {
        return;
    } else {
        if (vedo->eletero < tamado->sebzes){
            vedo->eletero = 0;
        } else {
            vedo->eletero -= tamado->sebzes;
        }
    }
}


/*
void tamadas(const Katona* ki, Katona* kit) {
    if (ki->eletero == 0) {
        return;
    }

    if (kit->eletero < ki->sebzes) {
        kit->eletero = 0;
    } else {
        kit->eletero -= ki->sebzes;
    }
}
 */

Katona* harc (Katona *kat1, Katona *kat2) {

    while (kat1->eletero != 0 && kat2->eletero != 0) {

        tamadas(kat1, kat2);
        tamadas(kat2, kat1);
    }

    return kat1->eletero == 0 ? kat2 : kat1;
}



/*Katona* harc(Katona* k1, Katona* k2) {
    while (k1->eletero != 0 && k2->eletero != 0) {
        tamadas(k1, k2);
        tamadas(k2, k1);
    }
    return k1->eletero == 0 ? k2 : k1;
}*/