#include <stdio.h>

int main() {
    // Program to calculate area anc circumference of a circle

    // Declare or initiate variables
    double radius, height, volume;
    const double PI = 3.1415926335;
    
    // Input radius
    printf("\nEnter the radius of the cylinder (in cm): ");
    scanf("%lf", &radius);
    printf("\nEnter the height of the cylinder (in cm): ");
    scanf("%lf", &height);

    // Calculate result
    volume = PI * radius * radius * height;

    // Output result
    printf("\nThe volyme of the cylinder is: %.10f cm3", volume);

    return 0;
}