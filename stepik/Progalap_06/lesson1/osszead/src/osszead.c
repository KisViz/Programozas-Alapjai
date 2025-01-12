#include <stdio.h>

void osszeadas (int x, int y) {
    FILE *eredmeny = fopen("eredmeny.txt", "w");
    fprintf(eredmeny, "%d+%d=%d\n", x, y, x+y);
    fclose(eredmeny);
}