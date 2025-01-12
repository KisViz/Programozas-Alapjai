#include "stdio.h"

int main () {
    char valasz = 'i';
    int szaml = 0;
    while (1) {
        printf("Sikerult? ");
        scanf("%ch", &valasz);
        szaml += 1;
        if (valasz != 'i') {
            break;
        }
    }
    printf("Ennyit sikerult dekazni: %d\n", szaml-1);
    return 0;
}