#include <stdio.h>

int main()
{
    int amount = 0;
    int i, length;

    printf("\nHow many numbers? ");
    scanf("%i", &amount);
    
    int numbers[amount];
    length = sizeof(numbers) / sizeof(numbers[0]);
    printf("\nEnter %i integer numbers:\n", amount);
    for(i = 0; i < length; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &numbers[i]);
    }

    printf("\nThe content of the array is: ");
    for(i = 0; i < length - 1; i++)
    {
        printf("%i, ", numbers[i]);
    }
    printf("%i", numbers[i]);

    return 0;
}
