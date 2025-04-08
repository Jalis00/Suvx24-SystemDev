#include <stdio.h>

int main() {
    // Declare variables
    float number1, number2, sum, difference, product, quotient;
    
    // Instructions and input
    printf("\nCalculations between two numbers with addition, subtraction, multiplication and division.");
    printf("\nEnter two numbers (separated by a space): ");
    scanf("%f%f", &number1, &number2);
    
    sum  = number1 + number2;           // addition
    difference  = number1 - number2;    // subtraction
    product  = number1 * number2;       // multiplication
    quotient  = number1 / number2;      // division (what happens if this was between integer numbers?)

    //  Present the result as mathematical expressions (How to choose number of deciamls?)
    printf("\n%.1f + %.1f = %.3f", number1, number2, sum);
    printf("\n%.1f + %.1f = %.3f", number1, number2, difference);
    printf("\n%.1f + %.1f = %.3f", number1, number2, product);
    printf("\n%.1f + %.1f = %.3f", number1, number2, quotient);

    return 0;
}