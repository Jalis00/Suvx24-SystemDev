#include <stdio.h>

/* Program to read & print a string.
    Variation A */

int main()
{
    char name[30];
    printf("\nEnter a name:\n");
    scanf("%s", name);
    printf("\nYour full name is %s", name);

    // Q: Try different names.
    // Occasionally (example, full name), the input is cut off and not printed entirely. Why?

    // A: %s format specifier will with scanf() read input from stdin (console) until newline, 
    //  end-of-file, or WHITESPACE is found.
    // Whitespace that is not newline as blank space or tab is.

    return 0;
}