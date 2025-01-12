#include <stdio.h>

int main() {
    int meret;
    scanf("%d", &meret);

    for (int i = 1; i < meret+1; ++i) {
        for (int j = 1; j < meret+1; ++j) {
            printf("%d ", i*j);
        }
        printf("\n");
    }

    return 0;
}