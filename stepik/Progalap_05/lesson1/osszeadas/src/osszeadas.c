int osszeadas(int szamok[], int db) {
    int osszeg = 0;
    for (int i = 0; i < db; i++) {
        osszeg += szamok[i];
    }

    return osszeg;
}