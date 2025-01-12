int felujitas (int alap, int extra, int honapok) {
    int aktualis = alap;
    int aktualisNov = 0;

    int osszeg = aktualis;
    for (int i = 1; i < honapok; ++i) {
        aktualisNov += extra;
        aktualis = aktualis + aktualisNov;
        osszeg += aktualis;
    }

    return osszeg;
}