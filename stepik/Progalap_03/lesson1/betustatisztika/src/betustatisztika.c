void statisztika(char szoveg[], int stat[]) {
    int hossz = 0;
    for (int i = 0; szoveg[i] != 0; ++i) {
        hossz++;
    }

    int k = -1;
    for (int i = 'a'; i <= 'z'; ++i) {
        int szaml = 0;
        for (int j = 0; j < hossz; ++j) {
            if (szoveg[j] == i || szoveg[j] == i - ('a' - 'A')) {
                szaml++;
            }
        }

        k++;
        stat[k] = szaml;
    }
}
