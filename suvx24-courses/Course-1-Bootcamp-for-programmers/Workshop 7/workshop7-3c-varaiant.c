#include <stdio.h>

int main() {

    int n = 2;
    while( n < 100 )
    {
        printf("\nEven number = %i", n);
        n += 2;
    }

    n = 1;
    while( n < 100 )
    {
        printf("\nOdd number = %i", n);
        n += 2;
    }

    return 0;
}