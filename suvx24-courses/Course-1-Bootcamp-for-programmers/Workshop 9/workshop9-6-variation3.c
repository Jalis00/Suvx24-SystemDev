#include <stdio.h>

/* Program to read & print a string.
    Variation 3 */

int main()
{
    char name[30];
    printf("\nEnter a name:\n");
    fgets(name, 30, stdin);
    printf("\nYour full name is %s", name);

    // Don't worry about trying to understanding all of the following right now!
    // We will cover pointers (using the * in front of a variable name) in a short while.

    // The fgets function used above is defined as:
    // char *fgets (char *str, int n, FILE *stream);
    // - str is a char-pointer (or char-array) - here, name
    // - n is an integer for "maximum amount of characters to read" - here, 30
    // - stream is a FILE (special defined type) pointer - here, stdin
    
    // Normally, you would "open" a file with another function and then pass along the 
    //  returned file pointer as the FILE *stream argument.
    // However, stdin (input from console) is considered a valid file pointer for this purpose!

    return 0;
}