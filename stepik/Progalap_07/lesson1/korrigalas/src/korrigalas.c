void korrigal (int *szam, int also, int felso) {
    *szam > felso ? *szam = felso : *szam;
    *szam < also ? *szam = also : *szam;
}

int ellenoriz(const int* ertek, int min, int max) {
    return *ertek < min || *ertek > max ? 0 : 1;
}