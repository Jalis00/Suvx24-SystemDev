#include <stdio.h>

int main()
{
    int numbers[5];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0;

    printf("\nEnter 5 integer numbers:\n");
    for(i = 0; i < length; i++)
    {
        printf("Number %i: ", i + 1);   // i + 1 is only for nice printing, not beginning at 0
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
