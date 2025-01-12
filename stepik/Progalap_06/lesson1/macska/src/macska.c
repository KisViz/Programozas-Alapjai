#include <stdio.h>
#include "string.h"

void macskakiir() {
    FILE* f = fopen("macska.txt", "w");
    char cat[] = "MACSKA";
    for (int i = 0; i < strlen(cat); ++i) {
        fprintf(f, "%c", cat[i]);
    }
    fprintf(f, "\n");
    fclose(f);
}