#include <stdio.h>

/* Program that uses a struct in struct.
    Nested declaration variant */

// Nested struct.
// Employee is an aggregate with both internal 'name' (char []) and 'join_date' (struct date) aggregate variables.
// The 'struct date' type itself is also internal.
struct employee
{
    int no;
    char name[30];
    struct date
    {
        int dd;
        int mm;
        int yyyy;
        } join_date;
};

int main()
{
    struct employee emp;
    // The following would be possible in example 1, but here the 'struct date' type declaration is internal to the 'struct employee' type.
    // Thus, we would get a compilation error.
    // struct date d;

    printf("\nEnter employee number, name, and date of joining (DD MM YYYY):\n");
    scanf(
        "%d %s %d %d %d",
        &emp.no,
        &emp.name,
        &emp.join_date.dd,
        &emp.join_date.mm,
        &emp.join_date.yyyy
        );

    printf("\nEmployee number = %d", emp.no);
    printf("\nName = %s", emp.name);
    printf("\nDate of joining = %d-%d-%d", emp.join_date.dd, emp.join_date.mm, emp.join_date.yyyy);

    return 0;
}