#include <stdio.h>

int main()
{
    // Input variables
    int operation;
    float number1 = 0.0;
    float number2 = 0.0;
    char cont = 'y';
    // Computational variables
    float sum = 0.0;
    float difference = 0.0;
    float product = 0.0;
    float quotient = 0.0;;

    printf("\nCalculations between two numbers.");

    do
    {
        printf("\n0 - Exit the program");
        printf("\n1 - Addition ( + )");
        printf("\n2 - Subtraction ( - )");
        printf("\n3 - Multiplication ( * )");
        printf("\n4 - Division ( / )");
        printf("\nChoose operation to perform: ");
        scanf("%i", &operation);
        
        if(operation > 0 && operation <= 4)
        {
            printf("\nEnter two numbers (separated by a space): ");
            scanf("%f%f", &number1, &number2);
        }
        switch(operation)
        {
            case 0:
                cont = 'n';
                break;
            case 1:
                sum = number1 + number2;
                printf("\nThe sum of %.1f + %.1f = %.1f", number1, number2, sum);
                break;
            case 2:
                difference = number1 - number2;
                printf("\nThe difference of %.1f - %.1f = %.1f", number1, number2, difference);
                break;
            case 3:
                product = number1 * number2;
                printf("\nThe product of %.1f * %.1f = %.1f", number1, number2, product);
                break;
            case 4:
                if(number2 > 0)
                {
                    quotient = number1 / number2;
                    printf("The quotient of %.1f / %.1f = %.1f", number1, number2, quotient);
                    break;
                }
                else
                {
                    printf("Sorry, division by zero is not allowed! Please try again.");
                    break;
                }
            default:
                printf("Not a valid operation! Please choose again.");
                break;
        }

        // Asks if the user wants to start over
        if(cont == 'y')
        {
            while (cont != 'y' && cont != 'n');
            {
                printf("\nDo you want to continue? (y/n): ");
                scanf(" %c", &cont);
                if (cont != 'y' && cont != 'n')
                {
                    printf("Not a valid answer! Please try again.");
                }
            }
        }

    } while (cont == 'y');

    printf("\nExiting program. Bye!");

    return 0;
}
