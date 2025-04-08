#include <stdio.h>

/* Program that uses an array of struct variables. */

typedef struct student
{
    int roll_no;
    char name[40];
} student;

int main()
{
    // {} - Initializer lists (used to initialize variables of aggregate types) can be nested, as seen below.
    student students[3] = {
        {123, "Kim"},
        {213, "Abdul"},
        {321, "Charles"}
        };
    // The C/C++ compiler does not care much for whitespace in code that is not inside a string literal (" ").
    // Thus, we can, at our own discretion, use line breaks to make the contents of an initializer list more readable.
    int i;

    for( i = 0; i < 3; i++ )
    {
        printf("\nStudent %d\nRoll number = %d\nName = %s\n", i+1, students[i].roll_no, students[i].name);
    }

    return 0;
}