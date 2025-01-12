void negyzetesit (int tomb[], int merete) {
    for (int i = 0; i < merete; ++i) {
        tomb[i] *= tomb[i];
    }
}