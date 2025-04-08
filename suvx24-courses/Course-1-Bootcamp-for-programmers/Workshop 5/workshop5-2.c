#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nProgram to evaluate which of the numbers that is smallest.");

    printf("\nEnter three integer numbers (separated by space): ");
    scanf("%i%i%i", &a, &b, &c);

    // Nested if..else statements
    if(a < b) 
    {
        if(a < c)
        {
            printf("\n%i is the smallest number", a);
        }
        else
        {
            printf("\n%i is the smallest number", c);
        }
        
    }
    else
    {
        if (b < a)
        {
            printf("\n%i is the smallest number", b);
        }
        else
        {
            printf("\n%i is the smallest number", c);
        }
    }
    
    return 0;
}