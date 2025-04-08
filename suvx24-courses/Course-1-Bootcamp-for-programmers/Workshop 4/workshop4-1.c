#include <stdio.h>

int main() {
    // Program to calculate area anc circumference of a circle

    // Declare or initiate variables
    double radius, area, circumference;
    const double PI = 3.1415926335;
    
    // Input radius
    printf("\nEnter the radius of the circle (in cm): ");
    scanf("%lf", &radius);  // Remeber the correct type of placeholder for double

    // Calculate result
    circumference = 2 * PI * radius;    // radius + radius * PI
    area = PI * radius * radius;

    // Output result
    printf("\nThe circumference of the circle is: %.10f cm", circumference);
    printf("\nThe area of the circle is: %.10f cm2", area);

    return 0;
}
