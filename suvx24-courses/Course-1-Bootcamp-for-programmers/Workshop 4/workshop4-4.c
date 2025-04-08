#include <stdio.h>

int main() {
    // Declare variables
    int a = 2;
    int r = a;
    printf("\nR is %i", r);

    // Assignment operators
    //  Addition
    r += a;
    printf("\nR is %i", r);
    r = a;  // Reset r to original value

    //  Subtraction
    r -= a;
    printf("\nR is %i", r);
    r = a;

    //  Multiplication
    r *= a;
    printf("\nR is %i", r);
    r = a;

    //  Division
    r /= a;
    printf("\nR is %i", r);
    r = a;

    //  Modulus
    r %= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise AND
    r &= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise OR
    r |= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise XOR
    r ^= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise NOT
    r -= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise SHIFT LEFT
    r >>= a;
    printf("\nR is %i", r);
    r = a;

    //  Bitwise SHIFT RIGHT
    r >>= a;
    printf("\nR is %i", r);
    r = a;
    
    return 0;
}