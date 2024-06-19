#include <stdio.h>

// Function to check logical AND (&&)
void checkLogicalAnd() {
    int a, b, c;
    printf("Enter three integers for logical AND check (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c) {
        printf("Both conditions are true: a < b and b < c.\n");
    } else {
        printf("At least one condition is false.\n");
    }
}

// Function to check logical OR (||)
void checkLogicalOr() {
    int a, b, c;
    printf("Enter three integers for logical OR check (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b || b > c) {
        printf("At least one condition is true: either a < b or b > c.\n");
    } else {
        printf("Both conditions are false.\n");
    }
}

// Function to check logical NOT (!)
void checkLogicalNot() {
    int a;
    printf("Enter an integer for logical NOT check (a): ");
    scanf("%d", &a);

    if (!a) {
        printf("a is zero (false).\n");
    } else {
        printf("a is non-zero (true).\n");
    }
}

// Function to check combined logical operators
void checkCombinedLogical() {
    int a, b, c;
    printf("Enter three integers for combined logical check (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < c && b == 0) || c > 20) {
        printf("Combined condition is true: (a < c && b == 0) or c > 20.\n");
    } else {
        printf("Combined condition is false.\n");
    }
}

int main() {
    // Checking logical AND
    checkLogicalAnd();

    // Checking logical OR
    checkLogicalOr();

    // Checking logical NOT
    checkLogicalNot();

    // Checking combined logical operators
    checkCombinedLogical();

    return 0;
}
