jegyek(int jegyek[], int db) {
    int egyes = 0;
    for (int i = 0; i < db; i++) {
        if (jegyek(i) == 1) {
            egyes++;
        }
    }

    return (double) egyes / db;
}