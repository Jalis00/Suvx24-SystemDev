#include <stdio.h>

int main() {
    // Declare variables
    int n1, n2, result;
    
    // Input with leading instruction
    printf("\nEnter two numbers (separated by a space): ");
    scanf("%i%i", &n1, &n2);
    
    // Calculate the sum
    result  = n1 + n2;
    //  Present the result as an expression
    printf("\n%i + %i = %i", n1, n2, result);

    return 0;
}