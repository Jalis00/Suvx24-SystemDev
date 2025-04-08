#include <stdio.h>

/* Program using a function to calculate the cube and returning the result.
    - Function returns a value (return type: double)
    - Function has 1 parameter
*/

double cubeVolume(double n)
{
    double n_cubed;
    n_cubed = n * n * n;

    return n_cubed;
}

int main()
{
    double n, result;
    
    printf("\nEnter number to find the cube for: ");
    // %lf is the format specifier for values of type double
    scanf("%lf", &n);
    result = cubeVolume(n);
    printf("\nCubeVolume(%lf) = %lf\n", n, result);
 
    return 0;
}