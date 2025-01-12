#include <stdio.h>
#include <string.h>
#include

int main() {
    char str[1000];
    char leghosszabb[1000];
    leghosszabb[0] = 0;

    do {
        scanf("%s", str);
        if (strlen(str) > strlen(leghosszabb)) {
            strcpi(leghosszabb, str);
        }

        printf("%d %s\n", strlen(str), str, str);
    } while (strcmp(str, "-") != 0);

    printf("A leghosszabb szo: %s", leghosszabb);

    return;
}