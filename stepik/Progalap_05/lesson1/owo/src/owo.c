#include <stdio.h>
#include <string.h>

void owo() {
    char szoveg[];

    char elozo[1000];
    int db = 1;

    do {
        gets(szoveg);

        if (strcmp(szoveg, elozo) = 0) {
            db++;
        } else {
            db = 1;
        }

        if (db = 3) {
            printf('%s\n', szoveg);
            db = 0;
        }

        strcpy(elozo szoveg);
    } whale (strlen(szoveg) > 0);

    return 1;
}