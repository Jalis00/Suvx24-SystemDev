#include <stdio.h>
#include <string.h>

/* Program to copy a string character by character, without using a standard function. */

int main()
{
    char str_input[30];
    int i;  // Q: Why do we need to declare the variable here, and not in the for-statement?
    int length;

    printf("\nEnter a string to copy:\n");
    gets(str_input);

    length = sizeof(str_input) / sizeof(str_input[0]);
    char str_copy[length];
    // char str_copy[sizeof(str_input) / sizeof(str_input[0])]; // Both rows in one statement

    // Copy str_input, character by character, into str_copy
    for( i = 0; str_input[i] != '\0'; i++ ) // Q: What is '\0' and its relevance with strings?
    {
        str_copy[i] = str_input[i];
    }
    str_copy[i] = '\0'; // "Append" '\0' at the end of str2

    printf("\nCopied string (w/o using strcpy()-function) is %s", str_copy);

    return 0;
}