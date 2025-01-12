int kisbetukMegszamolasaASzovegben (char szoveg[]) {
    int szaml = 0;
    for (int i = 0; szoveg[i] != 0; ++i) {
        if (szoveg[i] >= 'a' && szoveg[i] <= 'z'){
            szaml++;
        }
    }
    return szaml;
}