#include <stdio.h>

char megoldas1 = 's';
char megoldas2 = 'p';
char megoldas3 = 'z';
char megoldas4 = 'k';

int kor(int korszam) {
    printf("%d. kor\n", korszam);
    char a, b, c, d;
    scanf("%c %c %c %c%*c", &a, &b, &c, &d);

    printf("Talalatok: %c %c %c %c\n", a == megoldas1 ? 'I' : 'N', b == megoldas2 ? 'I' : 'N', c == megoldas3 ? 'I' : 'N', d == megoldas4 ? 'I' : 'N');

    if (a == megoldas1 && b == megoldas2 && c == megoldas3 && d == megoldas4) {
        return 1;
    }

    return 0;
}

void gyozelem() {
    printf("Gratulalok, nyertel!\n");
}

void vereseg() {
    printf("Sajnos vesztettel!\n");
}

int main() {
    printf("Szia, kezdheted a jatekot!\n");

    for (int i = 1; i <= 5; i++) {
        if (kor(i) == 1) {
            gyozelem();
            return 0;
        }
    }

    vereseg();
    return 0;
}