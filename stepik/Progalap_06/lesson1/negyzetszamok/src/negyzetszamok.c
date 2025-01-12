int negyzetosszeg(int db) {
    int j = 0;
    for (int i = 0; i <= db; ++i) {
        j += i*i;
    }
    return j;
}