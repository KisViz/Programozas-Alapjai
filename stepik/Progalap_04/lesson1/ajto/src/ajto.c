#include "stdio.h"

typedef struct {
    double szelesseg;
    double magassag;
} Ajto;

Ajto ajtotLetrehoz () {
    Ajto a;
    scanf("%lf%lf", &a.szelesseg, &a.magassag);
    return a;
}