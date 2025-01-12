int vasarlas (int tomb[], int db, int maxAr) {
    int sporolt = 0;

    int j = 0;
    for (int i = 0; i < db; ++i) {
        if (tomb[i] > maxAr) {
            sporolt += tomb[i];
        } else {
            tomb[j] = tomb[i];
            j++;
        }
    }
    return sporolt;
}