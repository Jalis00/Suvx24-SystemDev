#include <stdio.h>

int main() {
    
    // Initialization = Declaration + Assignment
    int n = 0;
    // Declaration only, since times will be assigned immediately by the input
    int times;

    printf("\nHow many times do you want to print?");
    scanf("%i", &times);

    while(n <= times)
    {
        printf("\nMy full name");
        printf("\nLoop varaibel n = %i", n);
        n++;
    }

    return 0;
}