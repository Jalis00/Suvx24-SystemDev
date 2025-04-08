#include <stdio.h>

/* Program to read and print the roll number and name of two students. */

// Using typedef to alias 'struct student'.
typedef struct student
{
    int roll_no;
    char name[40];
} student; // Alias'd as just 'student'

int main()
{
    student s1, s2;
    
    printf("\nEnter roll number of student 1: ");
    scanf("%d", &s1.roll_no); // Same as: &(s1.roll_no)
    printf("\nEnter name of student 1: ");
    scanf("%s", s1.name); // The char array of 'name' is already like a pointer.

    printf("\nEnter roll number of student 2: ");
    scanf("%d", &s2.roll_no);
    printf("\nEnter name of student 2: ");
    scanf("%s", s2.name); 
    
    printf("\nStudent 1\nRoll number = %d", s1.roll_no);
    printf("\nName = %s\n", s1.name);

    printf("\nStudent 2\nRoll number = %d", s2.roll_no);
    printf("\nName = %s\n", s2.name);

    return 0;
}

// One thing to note is that char arrays are a bit special and sometimes treated different.
// Printing a variable of type char array or char pointer often "implies" printing sequentially (memory-wise) until NUL: '\0'.
// Thus not requiring explicit dereferencing.