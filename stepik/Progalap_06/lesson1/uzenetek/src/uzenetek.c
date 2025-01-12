#include <stdio.h>
#include <dirent.h>
#include <string.h>

int uzenetekSzama(char* filename) {
    FILE* f = fopen(filename, "r");

    if (f != NULL) {
        char c;
        char elozo = ' ';
        int db = 0;
        while (1) {
            c = (char) fgetc(f);

            if (c < 0) {
                break;
            }

            if (c == '\n' && elozo != '\n') {
                db++;
            }
            elozo = c;
        }

        fclose(f);
        return db;
    }

    return 0;
}

void legtobb(char* mappa) {
    DIR* dir = opendir(mappa);

    if (dir == NULL) {
        fprintf(stderr, "Hibas mappa!\\n");
        return;
    }

    struct dirent* entry;

    int maxDb = 0;
    char maxNev[256];
    while ((entry = readdir(dir)) != NULL) {
        char utvonal[256];
        sprintf(utvonal, "%s/%s", mappa, entry->d_name);
        int db = uzenetekSzama(utvonal);
        if (db > maxDb) {
            strcpy(maxNev, entry->d_name);
            maxDb = db;
        }
    }

    closedir(dir);

    strtok(maxNev, ".");
    printf("A legtobb uzenetvaltas vele tortent: %s\n", maxNev);
}