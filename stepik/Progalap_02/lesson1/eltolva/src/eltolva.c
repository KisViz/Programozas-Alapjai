char eltolas(char betu, int mennyivel) {
    if (mennyivel > 97 && mennyivel <122) {
        return betu + mennyivel;
    } else {
        while (betu + mennyivel > 122){
            mennyivel -= 26;
        }
        return betu + mennyivel;
    }
    //printf("%d", betu);
}