#include <stdio.h>

void eltarol(int eredmenyek[], int darab) {
    FILE *f = fopen("pontszamok.bin", "wb");
    fwrite(eredmenyek, sizeof(int), darab, f);
    fclose(f);
}