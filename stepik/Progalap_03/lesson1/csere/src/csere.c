void csere(char szoveg[], char c1, char c2) {
    for (int i = 0; szoveg[i] != 0; ++i) {
        if (szoveg[i] == c1){
            szoveg[i] = c2;
        } else if (szoveg[i ] == c2) {
            szoveg[i] = c1;
        }
    }
}