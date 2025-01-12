int faktorialis(int szam){
    int vege = 1;
    for (int i = 1; i <= szam; ++i) {
        vege *=i;
    }
    return vege;
}