#include <stdio.h>

/* Program using a function to print a console line separator.
    - Function does not return a value (return type: void)
    - Function does not have parameters (no arguments can be passed when calling the function)
*/
//  Declaration
void printline();

// Main
int main()
{
    printline();
    printf("\t\t\tC Programming Language Author(s)");
    printline();
    printf("\t\t1. Brian W. Kernighan\n");
    printf("\t\t2. Dennis M. Ritchie\n");
    printline();
    
    return 0;
}

// Definition
void printline()
{
    int i;
    printf("\n");
    for( i = 1; i <= 80; i++ )
    {
        printf("-");
    }
    printf("\n");
}