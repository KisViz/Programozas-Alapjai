int betuszamitas (char szoveg[], char keres){
    int szaml = 0;
    for (int i = 0; szoveg[i] != 0; ++i) {
        if (szoveg[i] == keres || szoveg[i] == (keres+32) || szoveg[i] == (keres-32)){
            szaml++;
        }
    }
    return szaml;
}