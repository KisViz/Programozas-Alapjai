#include <stdio.h>

int fajvalasztas() {
    int valasz = 0;

    printf("Melyik fajt szeretned valasztani?\n");
    printf("  1: elf\n");
    printf("  2: torpe\n");
    printf("  3: ember\n");

    while (1) {
        scanf("%d", &valasz);

        if (valasz == 1 || valasz == 2 || valasz == 3) {
            break;
        }
    }

    switch (valasz) {
        case 1:
            printf("Ezt a fajt valasztottad: elf\n");
            break;
        case 2:
            printf("Ezt a fajt valasztottad: torpe\n");
            break;
        case 3:
            printf("Ezt a fajt valasztottad: ember\n");
            break;
    }
    return valasz;
}