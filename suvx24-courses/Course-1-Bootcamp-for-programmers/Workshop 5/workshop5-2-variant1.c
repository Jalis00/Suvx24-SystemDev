#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nProgram to evaluate which of the numbers that is smallest.");

    printf("\nEnter three integer numbers (separated by space): ");
    scanf("%i%i%i", &a, &b, &c);

    // Without nested if..else
    if(a < b && a < c) 
    {
        printf("\n%i is the smallest number", a);
    }
    else if (b < a && b < c)
    {
        printf("\n%i is the smallest number", b);
    }
    else // Then c must be the greatest
    {
        printf("\n%i is the smallest number", c);
    }
    
    return 0;
}