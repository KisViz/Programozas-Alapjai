int hossz(char szoveg[]) {
    int hossz = 0;
    for (int i = 0; szoveg[i] != 0; ++i) {
        hossz++;
    }
    return hossz;
}