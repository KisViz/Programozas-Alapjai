#include <stdio.h>

int szamjegyek (char catfile[]) {
    FILE *cat = fopen(catfile, "r");

    char text[101];
    for (int i = 0; feof(cat) == 0; ++i) {
        fscanf(cat, "%c", &text[i]);
    }
    fclose(cat);

    int sum = 0;
    for (int i = 0; text[i] != 0; ++i) {
        if (text[i] >= '0' && text[i] <= '9'){
            sum++;
        }
    }
    return sum;
}