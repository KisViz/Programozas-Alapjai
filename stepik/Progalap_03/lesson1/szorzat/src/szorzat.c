#include "stdio.h"

int main (){
    int szorzat = 1;
    int valt = 1;
    while(1){
        scanf("%d", &valt);
        if (valt == 0){
            break;
        } else {
            szorzat *= valt;
        }
    }
    printf("%d", szorzat);
}