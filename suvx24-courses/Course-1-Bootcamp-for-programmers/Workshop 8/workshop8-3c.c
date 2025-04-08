#include <stdio.h>

int main() {

    for(int i = 1; i < 100; i++)
    {
        if(i % 2 == 0)
        {
            printf("\nEven number = %i", i);
        }
    }
    for(int i = 1; i < 100; i++)
    {
        if( !(i % 2) == 0)
        {
            printf("\nOdd number = %i", i);
        }
    }

    return 0;
}