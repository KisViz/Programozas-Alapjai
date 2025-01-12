#include "stdio.h"

int harcIdo (int eletero,int sebzes) {

    if (eletero > 0 && sebzes == 0) {
        return -1;
    } else if (eletero == 0 && sebzes == 0) {
        return 0;
    } else if (eletero % sebzes > 0) {
        return eletero / sebzes +1;
    } else if (eletero % sebzes == 0){
        return eletero / sebzes;
    }
}