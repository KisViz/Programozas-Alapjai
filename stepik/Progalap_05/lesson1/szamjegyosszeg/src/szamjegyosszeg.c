int szamjegyosszeg(int szam) {
    osszeg = 0;
    while (szam > 0) {
        osszeg += szam % 10
        szam /= 10;
    }
    return osszeg;
}