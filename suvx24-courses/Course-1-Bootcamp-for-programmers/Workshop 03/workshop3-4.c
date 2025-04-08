#include <stdio.h>

int main() {
    // Declare variables
    float length, width, area, circumference;

    // Input with leading instruction
    printf("\nCalculation of area and circumference of a rectangel.");
    printf("\nEnter the length of the rectangel: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangel: ");
    scanf("%f", &width);
    
    // Do calculations
    area  = length * width;
    circumference = 2 * (length + width);
    
    //  Print out the results
    printf("\nArea: %.2f cm2", area);
    printf("\nCircumference of the rectangle: %.1f cm", circumference);

    return 0;
}