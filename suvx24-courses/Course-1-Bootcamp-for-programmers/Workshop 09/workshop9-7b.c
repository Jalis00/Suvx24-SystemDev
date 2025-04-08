#include <stdio.h>
#include <string.h>     // Enables the use of string-functions

/* Program to copy a string using strcpy()-function. */

int main()
{
    char str_input[30];
    int length;

    printf("\nEnter a string to copy:\n");
    gets(str_input);

    length = sizeof(str_input) / sizeof(str_input[0]);
    char str_copy[length];

    // Copy str_input into str_copy using the pattern strcpy(array_copy, array_original)
    strcpy(str_copy, str_input);

    printf("\nCopied string (using strcpy()-function) is %s", str_copy);

    return 0;
}