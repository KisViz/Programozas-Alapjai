int osszesites(int penzek[]) {
    int ossz = 0;
    for (int i = 0; penzek[i] != 0; ++i) {
        if (penzek[i] > 0) {
            ossz+= penzek[i];
        }
    }
    return ossz;
}