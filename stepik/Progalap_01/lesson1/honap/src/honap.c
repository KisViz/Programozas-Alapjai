#include <stdio.h>

void melyikHonap(int sorszam) {
    switch (sorszam) {
        case (1):
            printf("januar");
        break;
        case (2):
            printf("februar");
            break;
        case (3):
            printf("marcius");
            break;
        case (4):
            printf("aprilis");
            break;
        case (5):
            printf("majus");
            break;
        case (6):
            printf("junius");
            break;
        case (7):
            printf("julius");
            break;
        case (8):
            printf("augusztus");
            break;
        case (9):
            printf("szeptember");
            break;
        case (10):
            printf("oktober");
            break;
        case (11):
            printf("november");
            break;
        case (12):
            printf("december");
            break;
        default:
            printf("nincs ilyen honap");
    }
}