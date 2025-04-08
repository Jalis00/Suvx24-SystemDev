#include <stdio.h>

int main() {
    char a, b, result;

    printf("\nEnter a character: ");
    scanf(" %c", &a);
    printf("\nEnter another character: ");
    scanf(" %c ", &b);

    result = a == b;
    printf("\n%c == %c = %c", a, b, result);
    result = a != b;
    printf("\n%c != %c = %c", a, b, result);
    result = a > b;
    printf("\n%c > %c = %c", a, b, result);
    result = a < b;
    printf("\n%c < %c = %c", a, b, result);
    result = a >= b;
    printf("\n%c >= %c = %c", a, b, result);
    result = a <= b;
    printf("\n%c <= %c = %c", a, b, result);
    
    return 0;
}