#include <stdio.h>

int main() {

    printf("Does this program create an infinity loop?");

    // Is this an infinity loop?
    for(int i = 0; i >= 0; i++)
    {
        printf("\nProgramming in C is fun!");
        //printf("\nLoop varaibel i = %i", i);
    }

    return 0;
}