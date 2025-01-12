int osszeg (int tol, int ig){
    int ossz = 0;
    for (int i = tol; i < ig+1; ++i) {
        ossz += i;
    }
    return ossz;
}