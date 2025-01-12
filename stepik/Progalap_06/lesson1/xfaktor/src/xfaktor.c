#include <stdio.h>

int main() {
    FILE* f = fopen("boritek.txt", "r");
    char gyoztes[100];


    fscanf(f, "%[^\n]s", &gyoztes);

    fclose(f);

    printf("%s", gyoztes);
    return 0;
}