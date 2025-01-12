#include <stdio.h>
#include <limits.h>

int main() {

    int szelesseg;
    scanf("%d", &szelesseg);

    int aktualisPozicio = 1;

    while (1) {
        scanf("%*c");

        int legjobbPozicio = aktualisPozicio;
        int legjobbTavolsag = INT_MAX;

        for (int i = 0; i < szelesseg; i++) {
            char c;
            scanf("%c", &c);

            if (c == '-') {
                int tavolsag = aktualisPozicio > i+1 ?  aktualisPozicio - (i+1) : (i+1) - aktualisPozicio;

                if (tavolsag < legjobbTavolsag) {
                    legjobbTavolsag = tavolsag;
                    legjobbPozicio = i+1;
                }
            }
        }

        if (legjobbTavolsag == INT_MAX) {
            break;
        }

        if (legjobbPozicio == aktualisPozicio) {
            printf("ok!\n");
        } else {
            printf("vigyazat!\n");
            aktualisPozicio = legjobbPozicio;
        }
    }

    return 0;}