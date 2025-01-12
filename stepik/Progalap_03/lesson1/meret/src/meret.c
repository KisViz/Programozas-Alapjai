int meret(int tomb[]) {
    int db = 0;
    for (int i = 0; tomb[i] != -1; ++i) {
        db += 1;
    }
    return db;
}