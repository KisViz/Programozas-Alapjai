int szamjegyek(char szoveg[]) {
    int hossz = 0;
    for (int j = 0; szoveg[j] != 0; ++j) {
        hossz++;
    }

    int szamDB = 0;
    for (int i = 0; szoveg[i] != 0; ++i) {
        if (szoveg[i] >= '0' && szoveg[i] <= '9'){
            szamDB++;
        }
    }

    if (szamDB == hossz){
        return 1;
    } else {
        return 0;
    }
}