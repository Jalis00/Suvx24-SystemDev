#include <stdio.h>

int main() {
    // Declare variables
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int result = 0;

    result = a + b / c + d;
    printf("\n %i + %i  /  %i + %i  = %i", a, b, c, d, result);

    result = (a + b) / c + d;
    printf("\n(%i + %i) /  %i + %i  = %i", a, b, c, d, result);

    result = a + b / (c + d);
    printf("\n %i + %i  / (%i + %i) = %i", a, b, c, d, result);

    result = (a + b) / (c + d);
    printf("\n(%i + %i) / (%i + %i) = %i", a, b, c, d, result);

    return 0;
}