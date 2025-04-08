#include <stdio.h>

/* Program to read & print a string.
    Variation 2 */

int main()
{
    char name[30];
    printf("\nEnter a name:\n");
    scanf("%[^\n]", name);
    printf("\nYour full name is %s", name);

    // This works, but is a whole other can of worms.
    // [] is used to specify a "scanset" where it is possible to specify valid characters.
    // In the scanset, ^ is a negation - "not".
    // \n is the escaped newline character.
    // Thus, %[^\n] implies "anything that is not the newline character"
    // This results in a functionally similar behaviour to gets().

    // If you need to read an entire line, whitespace included, gets(name) or 
    //  scanf("%[^\n]", name) is not safe for production.
    // Instead, consider getting comfortable with fgets() of variation 3.

    return 0;
}