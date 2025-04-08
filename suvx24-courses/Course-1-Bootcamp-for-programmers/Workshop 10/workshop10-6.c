#include <stdio.h>

/* Program to calculate the average of three integers using a function. */

float average3(int x, int y, int z)
{
    float result;
    // It is important that the literal in the denominator is 3.0 and not 3.
    // Q: Why is it important?
    // Compile and run the program using both 3 and 3.0 - notice anything 
    //  over several test runs?
    result = (x + y + z) / 3.0;
    return result;
}

int main()
{
    int a, b, c;
    float average;

    printf("\nEnter three integer numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    average = average3(a, b, c);

    printf("\nAverage of %d, %d, and %d = %f", a, b, c, average);
 
    return 0;
}