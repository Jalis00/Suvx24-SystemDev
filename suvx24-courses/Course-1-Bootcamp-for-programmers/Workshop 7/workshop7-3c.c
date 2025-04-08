#include <stdio.h>

int main() {

    int n = 1;
    
    while( n < 100 )
    {
        if( (n % 2) == 0)
        {
            printf("\nEven number = %i", n);
        }
        n++;
    }

    n = 1;
    while( n < 100 )
    {
        if( !(n % 2) == 0)
        {
            printf("\nOdd number = %i", n);
        }
        n++;
    }


    return 0;
}