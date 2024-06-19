#include <stdio.h>

int main() {
    int var = 10;   // Declare an integer variable
    int *ptr;      // Declare a pointer to an integer

    ptr = &var;    // Assign the address of var to ptr

    printf("Value of var: %d\n", var);        // Output the value of var
    printf("Address of var: %p\n", &var);     // Output the address of var
    printf("Value stored in ptr: %p\n", ptr); // Output the value stored in ptr (address of var)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output the value pointed to by ptr (value of var)

    return 0;
}
