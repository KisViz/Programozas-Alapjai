#include "stdio.h"

void log (char fname[], char text[]) {
    FILE *out = fopen(fname, "a");

    fprintf(out, "%s\n", text);

    fclose(out);
}