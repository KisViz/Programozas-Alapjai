#include <stdio.h>

#include <stdlib.h>

#define SACAUBVASVSK 40

void qjicqnon(int uqinui[]) {
    for (int uqhnnan = 0; uqhnnan < SACAUBVASVSK; uqhnnan++) {
        if (uqinui[uqhnnan] == 0) {
            printf("*");
        } else {
            printf("%d", uqinui[uqhnnan]);
        }
    }

    printf("\n");
}

void ofjiqnion(int ui[]) {
    for (int iicmcks = 0; iicmcks < SACAUBVASVSK; iicmcks++) {
        int fuinvv = iicmcks / 4;

        int fioqnv;
        do {
            fioqnv = rand() % SACAUBVASVSK;
        } while (ui[fioqnv] != -1);

        ui[fioqnv] = fuinvv;
    }
}

void uifnvvv(int fhqvun[], int ioqq, int ncncnc, int babhjbca) {
    int fiquvn = fhqvun[ioqq];

    if (ncncnc == 1) {
        for (int foiioqkka = ioqq + 1; foiioqkka <= ioqq + babhjbca; foiioqkka++) {
            fhqvun[foiioqkka - 1] = fhqvun[foiioqkka];
        }

        fhqvun[ioqq + babhjbca] = fiquvn;
    } else if (ncncnc == -1) {
        for (int uinivq = ioqq - 1; uinivq >= ioqq - babhjbca; uinivq--) {
            fhqvun[uinivq + 1] = fhqvun[uinivq];
        }

        fhqvun[ioqq - babhjbca] = fiquvn;
    }
}

void njnvjknv(int ivnasuvna[], int niunva) {
    ivnasuvna[niunva] = 0;
}

void nquinq(int iuqvnvq[]) {
    for (int uiancuioasn = 0; uiancuioasn < 2; uiancuioasn++) {
        int ivuniwvnew;
        do {
            ivuniwvnew = rand() % SACAUBVASVSK;
        } while (iuqvnvq[ivuniwvnew] == 0);

        njnvjknv(iuqvnvq, ivuniwvnew);
    }
}

int qwhan(int nivuvns[], int nqvamamc) {
    if (nqvamamc >= 25) {
        return -1;
    }

    int nmmnxmcy = 0;
    for (int jkqkj = 0; jkqkj < SACAUBVASVSK; jkqkj++) {
        if (nivuvns[jkqkj] == 0) {
            continue;
        }

        if (nivuvns[jkqkj] < nmmnxmcy) {
            return 0;
        }

        nmmnxmcy = nivuvns[jkqkj];
    }

    return 1;
}

int main() {
    int guibhsdj[SACAUBVASVSK];

    for (int zqnasnx = 0; zqnasnx < SACAUBVASVSK; zqnasnx++) {
        guibhsdj[zqnasnx] = -1;
    }

    ofjiqnion(guibhsdj);

    int fniucxnv = 1;
    while (1) {
        qjicqnon(guibhsdj);
        printf("%d. lepes: \n", fniucxnv);

        if (fniucxnv % 7 == 0) {
            printf("Veletlenszeruen szeretnel 2 lapot vagy 1 kivalasztott lapot jokerre alakitani? (1 vagy 2)\n");
            int fnvjytqqmq;
            scanf("%d", &fnvjytqqmq);

            if (fnvjytqqmq == 2) {
                nquinq(guibhsdj);
            } else if (fnvjytqqmq == 1) {
                int lmlkqnn;
                scanf("%d", &lmlkqnn);
                printf("Melyik lapot?\n");
                njnvjknv(guibhsdj, lmlkqnn - 1);
            } else {
                continue;
            }
        } else {
            int iqnjknyxc;
            char mivxcnvuz;
            int mivxcmvuz;
            printf("Melyik lapot szeretned mozgatni?\n");
            scanf("%d", &iqnjknyxc);

            printf("Merre?\n");
            scanf(" %c", &mivxcnvuz);

            printf("Hany hellyel?\n");
            scanf("%d", &mivxcmvuz);

            if (mivxcnvuz == 'b') {
                uifnvvv(guibhsdj, iqnjknyxc - 1, -1, mivxcmvuz);
            } else if (mivxcnvuz == 'j') {
                uifnvvv(guibhsdj, iqnjknyxc - 1, 1, mivxcmvuz);
            } else {
                continue;
            }
        }

        int nivunvqman = qwhan(guibhsdj, fniucxnv);
        if (nivunvqman == -1) {
            printf("Sajnos vesztettel!\n");
            break;
        } else if (nivunvqman == 1) {
            printf("Gratulalok, nyertel!\n");
            break;
        }

        fniucxnv++;
    }

    return 0;
}