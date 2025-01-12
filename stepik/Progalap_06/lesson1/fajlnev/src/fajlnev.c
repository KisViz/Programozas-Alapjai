#include <stdio.h>
#include <string.h>

int titok(char fajlnev[]) {
    int res = 0;

    char fname[strlen(fajlnev) + 6 + 4 + 1];
    for (int i = 1; i < 100000; i++) {
        sprintf(fname, "%s_%d.txt", fajlnev, i);

        FILE* f = fopen(fname, "r");
        if (f != NULL) {
            int siker = fscanf(f, "%d", &res);
            if (siker > 0) {
                return res;
            }
        }
    }

    return res;
}