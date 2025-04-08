#include <stdio.h>

// Program using Continue.

int main()
{
    int numbers[] = {3, 1, 4, 1, 5, 9};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < length; i++)
    {
        printf("\n%i", numbers[i]);
    }

    return 0;
}