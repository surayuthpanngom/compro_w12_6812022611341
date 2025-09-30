#include <stdio.h> 

int main() {
    int x = 10; // Declare an integer variable
    int *ptr; // Declare a pointer to an integer

    ptr = &x; // Assign the address of x to the pointer
    printf("Before: x = %d\n", x); // Print the value of x

    *ptr = 20; // Modify the value of x using the pointer
    printf("After: x = %d\n", x); // Print the modified value of x

    return 0;
}