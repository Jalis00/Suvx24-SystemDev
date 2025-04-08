#include <stdio.h>

/* Program with a function:
    Example structure
    - Function Declaration(s)
    - Main: Function calls
    - Function Definition(s)
     */

// FUNCTION DECLARATION - Compiler parses top to bottom - it needs a prototype
//   declaration to understand whether the usage in main() is correct
void printname();

// Main
int main()
{
    printname();
    printname();
    printname();
    return 0;
}

// FUNCTION DEFINITION - Compiler is OK up until this point, but we must 
//  define to the compiler what the function actually does when the program is 
//  run. The code inside the function is called the BODY of the function.
void printname()
{
    printf("\nDennis M. Ritchie");
}