#include <stdio.h>

int tavolsag(int a, int b) {
    return a > b ? a - b : b - a;
}

void legkozelebbi(int a, int b, int c) {
    int ab = tavolsag(a, b);
    int ac = tavolsag(a, c);
    int bc = tavolsag(b, c);

    if (ab < ac && ab < bc) {
        printf("Az elso es a masodik van a legkozelebb egymashoz");
    } else if (ac < ab && ac < bc) {
        printf("Az elso es a harmadik van a legkozelebb egymashoz");
    } else if (bc < ab && bc < ac) {
        printf("A masodik es a harmadik van a legkozelebb egymashoz");
    }
}