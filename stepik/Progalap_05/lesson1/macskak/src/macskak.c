#include <stdio.h>
#include <stdlib.h>

#define MACSKA_SZAM 10

typedef struct {
    char nev[100];
    double eletkor;
    unsigned int nyavogasSzam;
} Macska;

Macska macskatLetrehoz(char nev[], double eletkor, unsigned int nyavogasSzam) {
    Macska m;

    for (int i = 0; i < 100; i++) {
        m.nev[i] = nev[i];
    }

    m.eletkor = eletkor;
    m.nyavogasSzam = nyavogasSzam;

    return m;
}

void kiir(Macska macska) {
    printf("%s - %.2lf eves es eddig %u alkalommal nyavogott\n", macska.nev, macska.eletkor, macska.nyavogasSzam);
}

double atlagEletkor(Macska macskak[], int meret) {
    double osszeg = 0;

    for (int i = 0; i < meret; i++) {
        osszeg += macskak[i].eletkor;
    }

    return (osszeg / meret);
}


Macska legfiatalabbMacska (Macska macskak[], int meret) {
    double min = 10000;
    int index = -1;

    for (int i = 0; i < meret; i++) {
        if (macskak[i].eletkor < min) {
            min = macskak[i].eletkor;
            index = i;
        }
    }

    return macskak[index];
}

int main() {
    char macskanevek[][100] = {"Cirmi" "Cirmi2" "Achilles" "Eszmeralda" "Gizi" "Tik-Tak" "Kaligula" "Lucifer" "James Bond" "Gina" "Dalma" "Ali"};

    Macska macskak[MACSKA_SZAM];
    for (int i = 0; i < MACSKA_SZAM; ++i) {
        macskak[i] = macskatLetrehoz(macskanevek[rand() % 12], rand() % 1000 / 100.0, rand() % 1000);
    }

    printf("A letrehozott macskak:\n");
    for (int i = 0; i < MACSKA_SZAM; ++i) {
        kiir(macskak[i]);
    }

    printf("\nA macskak atlagos eletkora: %lf\n\n", atlagEletkor(macskak, MACSKA_SZAM));
    kiir(legfiatalabbMacska(macskak, MACSKA_SZAM));

    return 0;
}