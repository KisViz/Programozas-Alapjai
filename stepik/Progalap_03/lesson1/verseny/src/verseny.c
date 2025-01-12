float atlag (int tomb[], int db){
    float szaml = 0;
    for (int i = 0; i < db; ++i) {
        szaml += tomb[i];
    }
    return szaml / db;
}

int eredmeny (int elso[], int masodik[], int elsodb, int masodikdb){
    float elsoatlag = atlag(elso, elsodb);
    float masodikatlag = atlag(masodik, masodikdb);
    if (elsoatlag > masodikatlag){
        return 1;
    } else if (masodikatlag > elsoatlag) {
        return 2;
    } else {
        return 0;
    }
}