typedef struct {
    char cim[256];
    char iro[256];
    int oldal;
}Konyv;

int olvasasiMennyiseg (Konyv konyvek[], int db) {
    int szaml = 0;
    for (int i = 0; i < db; ++i) {
        szaml += konyvek[i].oldal;
    }
    return szaml;
}