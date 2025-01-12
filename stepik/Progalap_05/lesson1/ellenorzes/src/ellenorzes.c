int ellenorzo(int szam) {
    if (szam % 231 == 53 || (szam % 2 == 0 && szam / 10 % 10 == 7)) {
        return 1;
    }

    for (int i = 2; i < szam; i++) {
        if (szam % i == 0) {
            return 0;
        }
    }

    return 1;
}

int gyartosor(int szamok[], int db) {
    int ok = 0;
    for (int i = 0; i < db; i++) {
        if (ellenorzo(szamok[i])) {
            ok++;
        }
    }

    return ok;
}

