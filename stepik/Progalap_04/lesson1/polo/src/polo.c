#include "stdio.h"

typedef struct {
    char meret[10];
    char szin[50];
    int csikokSzama;
} Polo;

Polo vasarlas() {
    Polo p;
    scanf("%d %s %[^\n]s", &p.csikokSzama, p.meret, p.szin);
    return p;
}