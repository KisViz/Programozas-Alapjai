#include <stdio.h>

void abc(char kezdobetu, int lepeskoz) {
    for (int i = kezdobetu; i <= 'z'; i+=lepeskoz) {
        printf("%c", i);
    }
}
