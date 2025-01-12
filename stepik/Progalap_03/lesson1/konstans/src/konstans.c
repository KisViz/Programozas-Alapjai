int szamlalas(char** szovegek, int darab) {
    int egyforma = 0;
    for (int i = 0; i < darab; i++) {
        if (szovegek[i][0] == 0) {
            egyforma++;
            continue;
        }

        char elso = szovegek[i][0];
        int j = 1;
        while (szovegek[i][j] != 0) {
            if (szovegek[i][j] != elso) {
                goto vege;
            }

            j++;
        }

        egyforma++;
        vege: ;
    }

    return egyforma;
}