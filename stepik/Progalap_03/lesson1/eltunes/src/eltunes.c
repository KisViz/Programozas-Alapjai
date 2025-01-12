void maganhangzotlanito (char szoveg[]) {
    int hossz = 0;
    while (szoveg[++hossz]);

    int j = 0;
    for (int i = 0; i < hossz; ++i) {
        if (szoveg[i] == 'e' || szoveg[i] == 'u' || szoveg[i] == 'i' || szoveg[i] == 'o' || szoveg[i] == 'a'){
        } else {
            szoveg[j] = szoveg [i];
            j++;
        }
    }
    szoveg[j] = 0;
}