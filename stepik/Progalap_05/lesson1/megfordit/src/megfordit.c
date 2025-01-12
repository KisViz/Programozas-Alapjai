#include <stdio.h>

int main() {
    int szamok[50];

    int i = -1;

    do {
        i++;
        scanf("%d", &szamok[i]);
    } while (szamok[i] != 0);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", szamok[j]);
    }

    printf("\n");

    return 0;
}