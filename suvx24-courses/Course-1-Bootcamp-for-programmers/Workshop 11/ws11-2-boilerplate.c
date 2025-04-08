#include <stdio.h>

int main() {

    int test;
    int *pInt = 0;
    test = 10;

    // Print the value of test variable
    printf("\nTest's value = %i", );
    // Print the address of test variable
    printf("\nTest's address as integer = %", );   // Which format specifier to use?
    // Print the address of test variable in hexadecimal format
    printf("\nTest's address in hexadecimal format = %", );   // Which format specifier to use?

    pInt = &test;
    // Print the value of pInt variable

    // Print the address of pInt variable

    // Print the address of pInt variable in hexadecimal format


    // Replace the value and print the value of test variable
    *pInt = 15;
    printf("\nNow, test's value = %i", );

    return 0;
}