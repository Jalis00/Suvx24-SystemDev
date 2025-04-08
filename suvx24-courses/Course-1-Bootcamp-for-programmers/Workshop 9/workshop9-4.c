#include <stdio.h>

int main()
{
    int amount = 0;
    int length = 0;
    float sum = 0.0;
    float average = 0.0;
    char cont;

    do
    {
        // Asks user to enter how many numbers to use in calculations?
        printf("\nHow many numbers? ");
        scanf("%i", &amount);
        
        // Receives the numbers, storing them in array numbers[]
        float numbers[amount];
        length = sizeof(numbers) / sizeof(numbers[0]);
        printf("\nEnter %i integer numbers:\n", amount);
        for(int i = 0; i < length; i++) // We could use amount here as well
        {
            printf("Number %i: ", i + 1);
            scanf("%f", &numbers[i]);
        }

        // Calculates the sum of the numbers in the array
        for(int i = 0; i < length; i++)
        {
            sum += numbers[i];
        }
        // Calculates the average of the numbers in the array
        // Why is there a problem here if we were to use int for sum instead?
        average = sum / length * 1.0;

        // Prints out the results
        printf("\nThe sum of the array is: %.2f", sum);
        printf("\nThe average of the array is: %.2f", average);

        // Asks the user if he/she wants to start over
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
