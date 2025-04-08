#include <stdio.h>

/* Program that uses an array of struct variables. */

typedef struct student
{
    int roll_no;
    char name[40];
} student;

int main()
{
    int noOfStudents, i;

    printf("Enter number of student(s): ");
    scanf("%d", &noOfStudents);

    student students[noOfStudents];

    printf("\nEnter details for %d students.\n", noOfStudents);

    for( i = 0; i < noOfStudents; i++ )
    {
        printf("\nGive roll number and name for student #%d\n", i+1);
        scanf("%d%s", &students[i].roll_no, students[i].name); // 'name'-element is still an array (pointer).
        // Q: &students[i].roll_no is functionally equivalent to which of the following?
        // - &(students[i].roll_no)
        // - (&students)[i].roll_no
        // - &(students[i]).roll_no
    }

    for( i = 0; i < noOfStudents; i++ )
    {
        printf("\nStudent %d\nRoll number = %d\nName = %s\n", i+1, students[i].roll_no, students[i].name);
    }

    return 0;
}