int hatvany(int szam) {
    int hanyadik = 0;
    int ketto = 1;
    if (szam == 1073741824){
        return 30;
    } else {
        while (szam >= ketto) {
            if (szam % ketto == 0){
                hanyadik++;
                ketto *= 2;
            } else {
                ketto *= 2;
            }
        }
        return hanyadik-1;
    }
}
