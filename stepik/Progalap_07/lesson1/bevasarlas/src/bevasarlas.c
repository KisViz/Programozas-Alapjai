int arulista  (const int tomb[]) {
    int osszeg = 0;
    for (int i = 0; tomb[i] != 0; ++i) {
        osszeg += tomb[i];
    }

    return osszeg;
}