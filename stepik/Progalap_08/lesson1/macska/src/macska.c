#include <stdlib.h>
#include <string.h>

char* macska() {
    char* szoveg = (char*) malloc(sizeof (char) * 7);
    strcpy(szoveg, "macska");
    return szoveg;
}