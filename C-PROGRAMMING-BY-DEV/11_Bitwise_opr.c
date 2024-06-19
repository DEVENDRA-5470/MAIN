#include <stdio.h>

// Global variables for demonstration purposes
int a = 5;    // 0000 0101 in binary
int b = 3;    // 0000 0011 in binary

// Function to perform bitwise AND operation
void bitwiseAND() {
    int result = a & b;
    printf("a & b = %u\n", result);
}

// Function to perform bitwise OR operation
void bitwiseOR() {
    int result = a | b;
    printf("a | b = %u\n", result);
}

// Function to perform bitwise XOR operation
void bitwiseXOR() {
    int result = a ^ b;
    printf("a ^ b = %u\n", result);
}

// Function to perform bitwise NOT operation
void bitwiseNOT() {
    int result = ~a;
    printf("~a = %u\n", result);
}

// Function to perform left shift operation
void leftShift() {
    int result = a << 2;
    printf("a << 2 = %u\n", result);
}

// Function to perform right shift operation
void rightShift() {
    int result = a >> 2;
    printf("a >> 2 = %u\n", result);
}

int main() {
    // Calling each function to demonstrate bitwise operations
    bitwiseAND();
    bitwiseOR();
    bitwiseXOR();
    bitwiseNOT();
    leftShift();
    rightShift();

    return 0;
}
