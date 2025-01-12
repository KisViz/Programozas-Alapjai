typedef struct {
    char rendszam[8];
    int sebesseg;
} Auto;

Auto gyorsabb (Auto au1, Auto au2){
    if(au2.sebesseg > au1.sebesseg) {
        return au2;
    } else {
        return au1;
    }
}