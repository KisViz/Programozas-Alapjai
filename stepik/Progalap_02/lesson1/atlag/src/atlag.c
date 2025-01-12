#include <stdio.h>

int main () {
    int ize =1;
    float szaml = 0;
    int osszge = 0;
    while (ize != 0){
        scanf("%d", &ize);
        szaml++;
        osszge += ize;
    }
    printf("%.2f", osszge / (szaml -1));
    return 0;
}