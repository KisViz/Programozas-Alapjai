#include "stdio.h"

void ebreszto (int meddigTart) {
    if (960 - meddigTart > 0) {
        printf("Janosnak %d ora %d percre kell az ebresztot beallitania.\n",(960 - meddigTart) /60, (960 - meddigTart) % 60);
    } else {
        int ize = 960 - meddigTart;
        while (ize < 0){
            ize += 1440;
        }
        printf("Janosnak %d ora %d percre kell az ebresztot beallitania.\n",ize /60,ize % 60);
    }

}