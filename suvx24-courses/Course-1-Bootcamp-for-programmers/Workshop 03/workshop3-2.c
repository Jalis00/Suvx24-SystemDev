#include <stdio.h>

int main() {
    // Declare a variable
    char grade;

    // I/O: Create a leading question and then store the answer in the variable
    printf("\nEnter your mark grade (letter A through F): ");
    scanf("%c", &grade);
    // Print a nice answer
    printf("\nAah, you got the grade %c!", grade);

    return 0;
}