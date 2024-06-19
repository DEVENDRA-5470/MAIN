#include <stdio.h>


// Outer function
void outerFunction() {
    // Local function inside outerFunction
    int nestedFunction(int x) {
        return x * x;
    };

    // Using the nested function
    int result = nestedFunction(5);
    printf("Result of nested function: %d\n", result);
}

int main() {
    outerFunction();

    return 0;
}
