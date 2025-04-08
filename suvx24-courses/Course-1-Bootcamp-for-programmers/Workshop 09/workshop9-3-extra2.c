#include <stdio.h>

int main()
{
    int amount = 0;
    int i, length;
    char cont;

    do
    {
        printf("\nHow many numbers? ");
        scanf("%i", &amount);
        
        int numbers[amount];    // Why must this declaration be here an not at the top?
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

        do
        {
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &cont);
            if (cont != 'y' && cont != 'n')
            {
                printf("Not a valid answer! Please try again.");
            }
        } while (cont != 'y' && cont != 'n');

    } while (cont == 'y');

    printf("Exiting program. Bye!");

    return 0;
}
