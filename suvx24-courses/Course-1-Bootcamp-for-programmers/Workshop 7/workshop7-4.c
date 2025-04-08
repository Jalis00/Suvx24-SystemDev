#include <stdio.h>

int main() {
    printf("\nProgram that prints one multiplication table.");
    
    int table_number, numbers;

    printf("\nFor which number do you want to print a multiplication table? ");
    scanf("%i", &table_number);
    printf("\nHow many numbers from this multiplication table do you want to print? ");
    scanf("%i", &numbers);

    int count = 1;
    while(count <= numbers)
    {
        printf("\n%i x %i = %i", table_number, count, table_number * count);
        count++;
    }

    return 0;
}