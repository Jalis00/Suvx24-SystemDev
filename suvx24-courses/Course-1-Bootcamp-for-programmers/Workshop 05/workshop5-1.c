#include <stdio.h>

int main() {
    int a, b;

    printf("\nProgram to evaluate which number is the greatest.");

    printf("\nEnter two integer numbers (separated by space): ");
    scanf("%i%i", &a, &b);


    if(a > b) 
    {
        printf("\n%i is the larger number", a);
    }
    else
    {
        printf("\n%i is the larger number", b);
    }
    
    return 0;
}