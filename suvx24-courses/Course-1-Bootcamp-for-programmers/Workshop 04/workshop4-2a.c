#include <stdio.h>

int main() {
    int a, b, result;

    printf("\nEnter an integer number: ");
    scanf("%i", &a);
    printf("\nEnter another integer number: ");
    scanf("%i", &b);

    result = a == b;
    printf("\n%i == %i = %i", a, b, result);

    // Abbreviated statement without the extra variable 'result'
    // printf("\n%i == %i = %i", a, b, a == b);

    result = a != b;
    printf("\n%i != %i = %i", a, b, result);

    result = a > b;
    printf("\n%i > %i = %i", a, b, result);

    result = a < b;
    printf("\n%i < %i = %i", a, b, result);

    result = a >= b;
    printf("\n%i >= %i = %i", a, b, result);
    
    result = a <= b;
    printf("\n%i <= %i = %i", a, b, result);
    
    return 0;
}