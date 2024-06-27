#include<stdio.h>
#include <stdio.h>



// Function definition
void printSum(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

// Main function
int main() {
    int num1 = 10, num2 = 20;

    // Call the function
    printSum(num1, num2);

    return 0;
}
