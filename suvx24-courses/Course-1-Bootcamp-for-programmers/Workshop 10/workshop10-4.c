#include <stdio.h>

/* Program using a function to return a value.
    - Function returns a value (return type: int)
    - Function has no parameters
*/

int return143();

int main()
{
    int n = 0;
    
    printf("\nBefore calling function 'return143()', N = %d\n", n);
    n = return143();
    printf("\nAfter calling function 'return143()', N = %d\n", n);
 
    return 0;
}

int return143()
{
    // The 'return' statement is used to return a value back to the calling function (here: main()).
    // The returned variable or value must match the return type in the above function signature. Caveat: The type matching may not be always be strict - the compiler may make an implicit type conversion.
    return 143;
}