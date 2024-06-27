#include <stdio.h>



// Function definition
int sum(int a, int b) {
    return a + b;  // Return the sum of a and b
}

// Main function
int main() {
    int num1 = 10, num2 = 20;

    // Call the sum function and store the result
    int result = sum(num1, num2);

    // Print the result
    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
