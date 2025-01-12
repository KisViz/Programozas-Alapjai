#include "stdio.h"

double oldaltBeolvas();
double kerulet(double a,double b);
double terulet(double a,double b);
void kiiras(double a,double b);


int main() {
    double egyikOldal = oldaltBeolvas();
    double masikOldal = oldaltBeolvas();

    double ker = kerulet(egyikOldal, masikOldal);
    double ter = terulet(egyikOldal, masikOldal);

    kiiras(ker, ter);

    return 0;
}

double oldaltBeolvas(){
    double a;
    scanf("%lf", &a);
    return a;
}


double kerulet(double a,double b){
    double vege = 2 * (a + b);
    return vege;
}


double terulet(double a,double b){
    double vege = a * b;
    return vege;
}

void kiiras(double a, double b){
    printf("A teglalap kerulete: %.2lf\n", a);
    printf("A teglalap terulete: %.2lf\n", b);
}