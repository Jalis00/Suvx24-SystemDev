#include <stdio.h>

int main() {
    float a, b, result;

    printf("\nEnter an integer number: ");
    scanf("%f", &a);
    printf("\nEnter another integer number: ");
    scanf("%f", &b);

    result = a == b;
    printf("\n%f == %f = %f", a, b, result);
    result = a != b;
    printf("\n%f != %f = %f", a, b, result);
    result = a > b;
    printf("\n%f > %f = %f", a, b, result);
    result = a < b;
    printf("\n%f < %f = %f", a, b, result);
    result = a >= b;
    printf("\n%f >= %f = %f", a, b, result);
    result = a <= b;
    printf("\n%f <= %f = %f", a, b, result);
    
    return 0;
}