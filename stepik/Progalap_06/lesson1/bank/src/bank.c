int bankolas (int x, int y, int time) {
    int sum = 0;
    for (int i = 0; i < time; ++i) {
        sum += (x + i * y);
    }

    return sum;
}