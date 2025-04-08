#include <stdio.h>

int main() {

    int *pInt;
    char *pChar;
    float *pFloat;
    double *pDouble;

    printf("\npInt size = %i", sizeof(pInt));
    printf("\npChar size = %i", sizeof(pChar));
    printf("\npFloat size = %i", sizeof(pFloat));
    printf("\npDouble size = %i", sizeof(pDouble));

    return 0;
}