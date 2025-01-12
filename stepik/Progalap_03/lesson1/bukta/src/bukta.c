int eredmenyek(int pontszamok[]) {
    int i = 0;
    int bukott = 0;

    for (int j = 0; pontszamok[j] != -1; ++j) {
        if (((float) pontszamok[j] / 80) < 0.5)
            bukott++;
    }

    return bukott;
}