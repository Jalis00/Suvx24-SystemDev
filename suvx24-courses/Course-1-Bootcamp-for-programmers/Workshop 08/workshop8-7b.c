#include <stdio.h>

int main() {
    int n;
    printf("\nEnter n value: ");
    scanf("%i", &n);

    for(int i = 1; i <= (n - 1); i++)
    {
        printf("\n");
        for(int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
    }

    return 0;
}