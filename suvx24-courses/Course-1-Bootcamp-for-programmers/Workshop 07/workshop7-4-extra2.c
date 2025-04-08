#include <stdio.h>

int main() {
    printf("\nProgram that prints one multiplication table.");
    
    int tables_start, tables_end, numbers;

    printf("\nFor which number do you want to start printing multiplication tables? ");
    scanf("%i", &tables_start);
    printf("\nFor which number do you want to end printing multiplication tables? ");
    scanf("%i", &tables_end);
    printf("\nHow many numbers in these multiplication tables do you want to print? ");
    scanf("%i", &numbers);

    int count = 1;
    while(tables_start <= tables_end)
    {

        while(count <= numbers)
        {
            printf("\n%i x %i = %i", tables_start, count, tables_start * count);
            count++;
        }
        count = 1;
        tables_start++;
    }

    return 0;
}