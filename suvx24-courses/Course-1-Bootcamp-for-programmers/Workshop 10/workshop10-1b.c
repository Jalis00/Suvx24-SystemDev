#include <stdio.h>

/* Program with a function:
    Example structure
    - Function Definition
    - Main: Function calls
     */

// FUNCTION DEFINITION - Compiler parses top to bottom - a prototype 
//  declaration isn't necessary if we just include the full definition 
//  right away.
void printname()
{
    printf("\nDennis M. Ritchie");
}

// Main
int main()
{
    printname();
    printname();
    printname();
    return 0;
}

// NOTE: Declarations may seem like extra work, but for bigger projects, it is 
//  very useful to split code across several files.
//  When building programs from several files, "header"-files (*.h) will 
//  contain declarations which we can include at the top with an '#include' 
//  statement.