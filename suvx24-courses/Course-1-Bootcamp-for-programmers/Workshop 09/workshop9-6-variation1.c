#include <stdio.h>

/* Program to read & print a string.
    Variation 1 */

int main()
{
    char name[30];
    printf("\nEnter a name:\n");
    gets(name);
    printf("\nYour full name is %s", name);

    // Q: Again, try different names. Notice anything different from first solution?

    // A: blank space or tab does not terminate the input.
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm

    return 0;
}

// The observant may note VS Code reporting a problem with gets().
// Highlighting the yellow squiggly line with your cursor will show you a small report.
// Even though gets() is considered unsafe, for tiny educational programs, it is OK to use!
// Avoid for any "real" programs though.