#include <stdio.h>
#include <math.h>

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
    float quotient = 0.0;
    float square_root = 0;
    float to_power_of = 0.0;
    float sine = 0.0;
    float cosine = 0.0;
    float tangent = 0.0;

    printf("\nCalculations between two numbers.");

    do
    {
        printf("\n0 - Exit the program");
        printf("\n1 - Addition ( + )");
        printf("\n2 - Subtraction ( - )");
        printf("\n3 - Multiplication ( * )");
        printf("\n4 - Division ( / )");
        printf("\n5 - To the power of");
        printf("\n6 - Square root");
        printf("\n7 - Sine");
        printf("\n8 - Cosine");
        printf("\n9 - Tangent");
        // Add more <math.h> operations here
        printf("\nChoose operation to perform: ");
        scanf("%i", &operation);
        
        if(operation > 0 && operation <= 4) // Double number entry
        {
            printf("\nEnter two numbers (separated by a space): ");
            scanf("%f%f", &number1, &number2);
        }
        if(operation == 5)  // Single number entry with special instructions
        {
            printf("\nEnter a number and then the power to be raised by (separated by a space): ");
            scanf("%f%f", &number1, &number2);
        }
        if(operation >= 6 && operation <= 9)    // Single number entry
        {
            printf("\nEnter a number: ");
            scanf("%f", &number1);
        }
        switch(operation)
        {
            case 0:
                cont = 'n';
                break;
            case 1:
                printf("\nAddition chosen"); 
                sum = number1 + number2;
                printf("\nThe sum of %.1f + %.1f = %.1f", number1, number2, sum);
                break;
            case 2:
                printf("\nSubtraction chosen");
                difference = number1 - number2;
                printf("\nThe difference of %.1f - %.1f = %.1f", number1, number2, difference);
                break;
            case 3:
                printf("\nMultiplication chosen");
                product = number1 * number2;
                printf("\nThe product of %.1f * %.1f = %.1f", number1, number2, product);
                break;
            case 4:
                printf("\nDivision chosen");
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
            case 5:
                printf("\nTo the power of chosen");
                to_power_of = pow(number1, number2);
                printf("\nThe number %.1f to the power of %.1f = %.1f", number1, number2, to_power_of);
                break;
            case 6:
                printf("\nSquare root chosen");
                if(number1 >= 0)
                {
                    square_root = sqrt(number1);
                    printf("\nThe square root of %.1f = %.1f", number1, square_root);
                    break;
                }
                else
                {
                    printf("Square root of a negative number is not a number! Please try again.");
                    break;
                }
            case 7:
                printf("\nSine chosen");
                sine = sin(number1);
                printf("\nSine of %.1f = %.1f", number1, sine);
                break;
            case 8:
                printf("\nSine chosen");
                cosine = cos(number1);
                printf("\nCosine of %.1f = %.1f", number1, cosine);
                break;
            case 9:
                printf("\nSine chosen");
                tangent = tan(number1);
                printf("\nTangent of %.1f = %.1f", number1, tangent);
                break;
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
