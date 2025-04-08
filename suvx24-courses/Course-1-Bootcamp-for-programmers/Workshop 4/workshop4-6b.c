#include <stdio.h>

int main() {
    // Program to convert temperature in fahrenheit to celsius
    double celsius, fahrenheit;
    
    printf("\nEnter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);  // Remeber the correct type of placeholder for double

    celsius = (fahrenheit - 32.0) / (9.0 / 5.0); // The last parenthisis can be omitted

    printf("\n%lf degrees fahrenheit %lf degrees in celsius", fahrenheit, celsius);

    return 0;
}