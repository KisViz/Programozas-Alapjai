int minimum (int week) {
    int fibo = 1;
    int elozo = 0;
    int elozoelotti = 0;

    if (week == 1) {
        return 0;
    }

    for (int i = 0; i < week-1; ++i) {
    elozoelotti = elozo;
    elozo = fibo;
    fibo = elozoelotti + elozo;
    }

    return fibo;
}