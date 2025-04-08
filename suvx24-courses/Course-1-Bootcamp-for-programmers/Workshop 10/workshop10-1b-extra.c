#include <stdio.h>

void printname();

int main() {
    
    int n = 0;
    int times;

    printf("\nHow many times do you want to print? ");
    scanf("%i", &times);

    while(n < times)
    {
        printname();
        n++;
    }

    return 0;
}

void printname()
{
    printf("\nMy full name");
}