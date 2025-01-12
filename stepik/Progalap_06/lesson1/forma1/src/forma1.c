typedef struct {
    int ev;
    int honap;
    int nap;
} Datum;

typedef struct {
    char nev[100];
    Datum szuletesiDatum;
} Pilota;

typedef struct {
    char helyszin[100];
    int korokSzama;
    Pilota sorrend[20];
    Pilota leggyorsabbKor;
} Versenyeredmeny;

// megoldas