#include <stdio.h>

/* Program using a function to print a console line separator.
    - Function does not return a value (return type: void)
    - Function has 2 parameters
*/

void printline(char symbol, int n);

int main()
{
    char filler = '$';
    int length = 55;
    
    // Print a line. Function arguments: A char literal 'a' and int value 60
    printline('a', 60);
    printf("\t\t\tC Programming Language Author(s)");
    // Print a line. Function arguments: The 'filler' char variable and 'length' int variable
    printline(filler, length);
    printf("\t\t1. Brian W. Kernighan\n");
    printf("\t\t2. Dennis M. Ritchie\n");
    // Print a line. Function arguments: A char literal '*' and int value 50.
    printline('*', 50);
    
    return 0;
}

// printline() has two parameters; a char and an int
void printline(char symbol, int n)
{
    // Note that the parameters 'symbol' and 'n' is "declared" in the above function signature and can then be used inside the function block.
    int i;
    printf("\n");
    // The integer 'n' is used here to determine the length of the line that is printed.
    for( i = 1; i <= n; i++ )
    {
        printf("%c", symbol);
    }
    printf("\n");
}