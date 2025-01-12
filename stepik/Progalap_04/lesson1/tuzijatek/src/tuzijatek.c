typedef struct {
    int nagysag;
    int idotartam;
} Tuzijatek;

felloves(Tuzijatek tuzijatekok[], int darab) {
    int ossz = 0;
    for (int i = 0; i < darab[i]; i++) {
        ossz += tuzijatekok[i].idotartam;
    }
    return ossz;
}