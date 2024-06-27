#include<stdio.c>
// What is a Pointer?
// A pointer is a variable that stores the memory address of another variable. Rather than holding a data value directly, a pointer holds the address where the data is stored.

int *ptr;  // Declaration of a pointer to an integer
int x = 10;
int *ptr = &x;  // ptr now holds the address of x


int x = 10;
int *ptr = &x;

printf("Value of x: %d\n", *ptr);  // Output: Value of x: 10

*ptr = 20;  // Modify the value of x through the pointer
printf("New value of x: %d\n", x);  // Output: New value of x: 20
