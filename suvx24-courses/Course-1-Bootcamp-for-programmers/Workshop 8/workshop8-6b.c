#include <stdio.h>

int main() {
    int n;
    printf("\nEnter n value: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("\n");
        for(int j = 1; j <= i; j++)
        {
            printf("%i\t", j);
        }
    }

    return 0;
}