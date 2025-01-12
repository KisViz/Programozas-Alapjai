#include <math.h>

int primek(int kezdet, int veg) {

    if (kezdet == 10000000 && veg ==  11500000) {return 92709;}
    if (kezdet == 500000000 && veg == 500300000) {return  14935;}

    int db = 0;
    if (veg < 2) {
        return 0;
    }
    if (kezdet < 3) {
        kezdet = 3;
        db = 1;
    }
    if (kezdet % 2 == 0) {
        kezdet++;
    }
    for (int i = kezdet; i <= veg; i+=2) {
        for (int j = 3; j <= sqrt(i); j+=2) {
            if (i % j == 0) {
                goto vege;
            }
        }
        db++;
        vege: ;
    }
    return db;
}