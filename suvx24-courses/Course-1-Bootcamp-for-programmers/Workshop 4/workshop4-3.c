#include <stdio.h>

int main() {
    // Declare variables
    int a = 24;
    int b = 15;
    int c = 33;
    int result = 0;

    result = a < b && a > c;
    printf("\n%i < %i && %i > %i = %i", a, b, a, c, result);

    // Abbreviated variant not using the extra variable
    printf("\n%i < %i && %i > %i = %i", a, b, a, c, a < b && a > c);
    
    result = a < b || a > c;
    printf("\n%i < %i && %i > %i = %i", a, b, a, c, result);

    result = !(a < b && a > c);
    printf("\n%i < %i && %i > %i = %i", a, b, a, c, result);

    result = !(a < b || a > c);
    printf("\n%i < %i && %i > %i = %i", a, b, a, c, result);

    return 0;
}