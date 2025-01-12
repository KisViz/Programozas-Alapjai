int osszeg(int* tomb, int darab) {
    int osszeg = 0;

    for (int i = 0; i < darab; ++i) {
        osszeg += tomb[i];
    }
    return osszeg;
}