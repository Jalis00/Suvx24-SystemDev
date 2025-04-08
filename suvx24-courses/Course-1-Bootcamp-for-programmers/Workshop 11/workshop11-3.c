#include <stdio.h>

/* Program to understand the relation of pointers, arrays, and pointer arithmetic. */

int main()
{
    int arr[3] = {6, 77, 888};
    int *pointer;
    int i;

    pointer = arr;

    for(i = 0; i < 3; i++)
    {
        printf(
            "\narr[%i] address = %u %u %u %u %u %u ",
            i,              // Array index
            &arr[i],        // Address of i:th element of arr
            &i[arr],        // Address of arr:th element of i ????? - See note (2) below.
            pointer + i,    // Pointer's value (address of start of arr) + i?
            i + pointer,    // i + Pointer's value (address of start of arr)?
            arr + i,        // Address of start of arr (arr is a pointer) + i?
            i + arr         // i + Address of start of arr (arr is a pointer)?
            );

        printf(
            "\narr[%i] value = %u %u %u %u %u %u ",
            i,
            arr[i],         // i:th element of arr
            i[arr],         // arr:th element of i ????? - See note (2) below.
            *(pointer + i), // Dereferenced address: pointer + i
            *(i + pointer), // Dereferenced address: i + pointer
            *(arr + i),     // Dereferenced address: arr + i
            *(i + arr)      // Dereferenced address: i + arr
            );
    }
    
    return 0;
}

// (1) //
// Pointer Arithmetic.
// When one of the operands in an arithmetic operation is a pointer, like:
//      int-pointer p + int i
// or
//      int i + int-pointer p
// The C language will actually evaluate these operations as:
//      int-pointer p + i*sizeof(int)
// or
//      i*sizeof(int) + int-pointer p
//
// As pointers relate to memory addresses, to move "one" step in memory is to move the memory size (in bytes) of a value of the type pointed to.
// One int step in memory:
//      1*sizeof(int) =
//      = 1*4
//      = 4
//      (4 bytes)

// (2) //
// Ye be warned:
// For indexing of an array (using the subscript operator), the typical (intended) syntax is:
//      array[index]
// Which is an operation essentially equivalent to:
//      *(array + index)    // NOTE: Array is a pointer, index is an int. The above note (1) applies.
// Because of how the operation is defined in the language, this yields the same result:
//      index[array]        // Kind of *(index + array)
// It is recommended to use the prior syntax, lest you want to begin a lonely path of exile in the programming community at large.
