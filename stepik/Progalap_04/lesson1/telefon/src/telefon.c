typedef struct {
    char nev[100];
    int verzioszam;
    double meret;
} Alkalmazas;

typedef struct {
    char gyarto[128];
    double kijelzoAtmero;
    Alkalmazas alkalmazasok[3];
}Telefon;