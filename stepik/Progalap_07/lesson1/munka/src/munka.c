#include "stdio.h"
#include "string.h"

void uzenet (char nev[], char uzi[]) {
    char file[strlen(nev) + 4];
    sprintf(file,"%s.txt", nev);

    FILE *f = fopen(file, "w");
    fprintf(f, "%s", uzi);
    fclose(f);
}