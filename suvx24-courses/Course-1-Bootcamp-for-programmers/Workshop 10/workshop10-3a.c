#include <stdio.h>

/* Program using a function to print a console line separator.
    - Function does not return a value (return type: void)
    - Function has 1 parameter
*/

void printline(char symbol);

int main()
{
    char filler = '$';
    
    // Print a line. A char literal 'a' is provided as the argument.
    printline('a');
    printf("\t\t\tC Programming Language Author(s)");
    // Print a line. The 'filler' char variable is provided as the argument; 'filler' has the value '$'.
    printline(filler);
    printf("\t\t1. Brian W. Kernighan\n");
    printf("\t\t2. Dennis M. Ritchie\n");
    // Print a line. A char literal '*' is provided as the argument.
    printline('*');
    
    return 0;
}

// printline(char symbol) has one parameter of type char.
void printline(char symbol)
{
    int i;
    printf("\n");
    for( i = 1; i <= 80; i++ )
    {

        printf("%c", symbol);
    }
    printf("\n");
}