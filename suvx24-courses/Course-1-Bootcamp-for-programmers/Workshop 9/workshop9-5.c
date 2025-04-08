#include <stdio.h>

int main()
{
    int amount = 0;
    int length = 0;
    int largest = 0;
    int smallest = 0;
    int current;
    char cont;

    do
    {
        // Asks user to enter how many numbers to use in calculations?
        printf("\nHow many numbers? ");
        scanf("%i", &amount);
        
        // Receives the numbers, storing them in array numbers[]
        int numbers[amount];
        length = sizeof(numbers) / sizeof(numbers[0]);
        printf("\nEnter %i integer numbers:\n", amount);
        for(int i = 0; i < length; i++) // We could use amount here as well
        {
            printf("Number %i: ", i + 1);
            scanf("%i", &numbers[i]);
        }

        smallest = largest = numbers[0]; // Starting point with the first element in the array.
        // In the above statement, the right-most operation would process first: largest = numbers[0]
        // Question: What do you think of the clarity of the above statement?
        // Finds the largest value in the array:
        for(int i = 1; i < length; i++)
        {
            if( numbers[i] > largest ) {    // Larger than current largest?
                largest = numbers[i];       // If yes, update
            }
            if( numbers[i] < smallest ) {   // Smaller than current smallest?
                smallest = numbers[i];      // If yes, update
            }
        }

        // Prints out the results
        printf("\nThe largest number in the array is: %i", largest);
        printf("\nThe smallest number in array is: %i", smallest);

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
