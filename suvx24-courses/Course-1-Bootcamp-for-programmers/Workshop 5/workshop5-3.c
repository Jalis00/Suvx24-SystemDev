#include <stdio.h>

int main() {
    int a, b, operation;

    printf("\nProgram to  calculate two numbers.");

    printf("\nEnter two integer numbers (separated by space): ");
    scanf("%i%i", &a, &b);

    printf("\nChoose operation to perform between the numbers: ");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\nEnter a number from the list: ");
    scanf("%i", &operation);

    switch(operation)
    {
        case 1:
            printf("\n%i + %i = %i", a, b, a + b);
            break;
        case 2:
            printf("\n%i - %i = %i", a, b, a - b);
            break;
        case 3:
            printf("\n%i * %i = %i", a, b, a * b);
            break;
        case 4:
            printf("\n%i / %i = %i", a, b, a / b);
            break;
        default:
            printf("\nNot a valid operation. Sorry, can not perform the calculation.");
            printf("\nTerminating the program\n");
            break;

    return 0;
}