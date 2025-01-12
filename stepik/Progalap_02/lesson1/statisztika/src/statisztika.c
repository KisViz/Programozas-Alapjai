#include <stdio.h>
#include <limits.h>

int main (){
    int ize = 1;
    int min = INT_MAX;
    int max = INT_MIN;
    while (ize != 0){
        scanf("%d", &ize);
        if (ize > max) {
            max = ize;
        } if (ize < min && ize !=0){
            min = ize;
        }
    }
    printf("A minimum: %d\nA maximum: %d\n", min, max);
    return 0;
}