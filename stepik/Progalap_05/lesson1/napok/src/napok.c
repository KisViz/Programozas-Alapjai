#include <string.h>

int hetnapja(char str[]) {
    int nap = 0;
    if (!strcmp(str, "hetfo")) {
        nap = 1;
    } else if (!strcmp(str, "kedd")) {
        nap = 2;
    } else if (!strcmp(str, "szerda")) {
        nap = 3;
    } else if (!strcmp(str, "pentek")) {
        nap = 5;
    } else if (!strcmp(str, "csutortok")) {
        nap = 4;
    } else if (!strcmp(str, "szombat")) {
        nap = 6;
    } else if (!strcmp(str, "vasarnap")) {
        nap = 7;
    }

    return nap;
}