#include <stdio.h>

int main() {
    int a, b, greatest;

    printf("\nProgram to evaluate which number is the greatest.");

    printf("\nEnter two integer numbers (separated by space): ");
    scanf("%i%i", &a, &b);

    // Variant using ternary conditional operator 
    greatest = a > b ? a : b;
    printf("\n%i is the larger number", greatest);

    return 0;
}