#include <stdio.h>

int main() {

    for(int i = 2; i < 100; i += 2)
    {
        printf("\nEven number = %i", i);
    }
    for(int i = 1; i < 100; i += 2)
    {
        printf("\nOdd number = %i", i);
    }

    return 0;
}