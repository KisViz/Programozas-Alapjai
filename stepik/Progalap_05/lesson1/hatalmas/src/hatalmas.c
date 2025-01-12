int legnagyobb(int tomb[], int db) {
    int max = tomb[0];
    for (int i = 1; i < db; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }

    return max;
}