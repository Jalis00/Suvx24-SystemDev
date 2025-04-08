#include <stdio.h>

int main() {
    // Program to convert temperature in celsius to fahrenheit
    double celsius, fahrenheit;
    
    printf("\nEnter the temperature in celsius: ");
    scanf("%lf", &celsius);  // Remeber the correct type of placeholder for double

    fahrenheit = 9.0 / 5.0 * celsius + 32.0;    // Important to use the deciamals

    printf("\n%lf degrees celsius %lf degrees in fahrenheit", celsius, fahrenheit);

    return 0;
}