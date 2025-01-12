#include <stdio.h>

void hullamvasut(int kor, int magas) {
    if (kor >= 16 && magas > 150) {
        printf("Mehet");
    } else {
        printf("Nem mehet");
    }
}