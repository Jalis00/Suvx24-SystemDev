#include <stdio.h>

int main() {
    int number, oddOrEven;

    printf("\nProgram to evaluate if a number is odd or even.");

    printf("\nEnter an integer number (separated by space): ");
    scanf("%i", &number);

    oddOrEven = number % 2;

    if(oddOrEven == 0) 
    {
        printf("\n%i is an even number", number);
    }
    else if (oddOrEven != 0)
    {
        printf("\n%i is an odd number", number);
    }
    else    // Does not work quite well. Why?
    {
        printf("\n%i is not a number.");
    }
    
    return 0;
}