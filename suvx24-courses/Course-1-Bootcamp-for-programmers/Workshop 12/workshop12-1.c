#include <stdio.h>

/* Program to create a simple struct type and use it.
    Create struct type; declare variable of struct type; initialize struct variable. */

struct student
{
    int roll_no;
    char name[40];
};

int main()
{
    // A new variable of our own aggregate type "student" can be declared with 'struct student'.
    // Including the struct keyword is necessary, but some may consider it verbose.
    // As such, it is often aliased using the 'typedef' keyword, which we'll see some examples of later.
    struct student s = {123, "Kim"};

    printf("\nRoll number = %d", s.roll_no);
    printf("\nName = %s", s.name);

    return 0;
}