#include <stdio.h>

/* Program that uses a struct in struct.
    Example 1 */

struct date
{
    int dd;
    int mm;
    int yyyy;
};

// Nested struct.
// Employee is an aggregate with both internal 'name' (char []) and 'join_date' (struct date) aggregate variables.
struct employee
{
    int no;
    char name[30];
    struct date join_date;
};

int main()
{
    struct employee emp;
    
    // Q: What happens if the user of this program inputs values outside the requested format, DD MM YYYY?
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