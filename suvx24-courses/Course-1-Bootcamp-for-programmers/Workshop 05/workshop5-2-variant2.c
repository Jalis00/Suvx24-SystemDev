#include <stdio.h>

int main() {
    int a, b, c, smallest;

    printf("\nProgram to evaluate which of the numbers that is smallest.");

    printf("\nEnter three integer numbers (separated by space): ");
    scanf("%i%i%i", &a, &b, &c);

    // Without nested if..else and not repeating the print instruction. 
    // Maybe this offers a little better readbility
    if(a < b && a < c) 
    {
        smallest = a;
    }
    else if (b < a && b < c)
    {
        smallest = b;
    }
    else // Then c must be the greatest
    {
        smallest = c;
    }
    
    printf("\n%i is the smallest number", smallest);

    return 0;
}