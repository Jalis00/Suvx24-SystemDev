#include <stdio.h>

int main() {
    // Declare a variable
    float height;

    // Input/Output:
    // Give an output of what to enter
    printf("\nEnter your height (in cm): ");
    // Input the answer (hopefully a number)
    scanf("%f", &height);

    // Print out the answer with all the decimals
    printf("\nSo, your length is %f", height);

    return 0;
}
