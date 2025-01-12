#include <stdlib.h>
#include "limits.h"

int kulonbseg (int tomb[], int hossz) {
    int min = INT_MAX;
    int max = INT_MIN;
    if (hossz > 1) {
        for (int i = 0; i < hossz; ++i) {
            if (tomb[i] < min) {
                min = tomb[i];
            } else if (tomb[i] > max) {
                max = tomb[i];
            }
        }
        return max - min;
    } else {
        return 0;
    }
}