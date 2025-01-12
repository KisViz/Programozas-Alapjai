#include <stdio.h>

int meggyszedes() {

    int be = 5;
    int elotte = 0;
    int szaml = 0;
    int elso = 1;

    while (be > 0) {
        if (elso == 1) {
            scanf("%d", &elotte);
            elso = 0;
        } else {
            scanf("%d", &be);
            if(be <=0 ){
                break;
            }
            if ((elotte - be) < 0) {
                szaml += -1 * (elotte - be);
            } else {
                szaml += (elotte - be);
            }
            elotte = be;
            printf("%d", szaml);
        }
    }
    return szaml;
}