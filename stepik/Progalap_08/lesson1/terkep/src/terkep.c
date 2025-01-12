#include <stdlib.h>

char** terkep(int magassag, int szelesseg) {
    char** map = (char**) malloc(magassag * sizeof (char*));
    for (int i = 0; i < magassag; i++) {
        map[i] = (char *)malloc(sizeof (char) * szelesseg);
    }

    return map;
}