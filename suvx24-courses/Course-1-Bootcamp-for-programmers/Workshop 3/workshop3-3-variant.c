#include <stdio.h>

int main() {
    // Declare variables
    int n1, n2, result;
    
    // Input numbers separately with leading instructions
    printf("\nEnter the first number: ");
    scanf("%i", &n1);
    printf("\nEnter the second number: ");
    scanf("%i", &n2);
    
    // Calculate the sum of the two numbers
    result  = n1 + n2;
    //  Present the result as an expression
    printf("\n%i + %i = %i", n1, n2, result);

    return 0;
}