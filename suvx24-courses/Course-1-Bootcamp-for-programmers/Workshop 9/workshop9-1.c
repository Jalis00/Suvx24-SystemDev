#include <stdio.h>

// Program using Continue.

int main()
{
    int n = 1;
    
    while( n < 100 )
    {
        if( !(n % 2) == 0)
        {
            n++;
            continue;   // Exiting this loop turn.
            // Returns to the beginning of this while loop for the next loop turn.
        }
        printf("\nEven number = %i", n);
        n++;
    }

    n = 1;
    while( n < 100 )
    {
        if( (n % 2) == 0)
        {
            n++;
            continue;   // Exiting this loop turn.
            // Returns to the beginning of this while loop for the next loop turn.
        }
        printf("\nOdd number = %i", n);
        n++;
    }

    return 0;
}