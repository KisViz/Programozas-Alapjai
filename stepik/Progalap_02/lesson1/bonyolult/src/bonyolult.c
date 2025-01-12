#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }

    return gcd(b % a, a);
}

void egyszerusit (int szamlalo, int nevezo) {
    if (szamlalo % nevezo == 0) {
        printf("%d", szamlalo / nevezo);
    } else {
        printf("%d/%d", szamlalo / gcd(szamlalo, nevezo), nevezo / gcd(szamlalo, nevezo));
    }
}