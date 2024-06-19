// Comparision Operator
// 1. Equal to (==)
// 2. Not Equal to (!=)
// 3. Greater than (>)
// 4. Less than (<)
// 5. Greater than or Equal to (>=)
// 6. Less than or Equal to (<=)

#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 3;

    // Equal to
    if (num1 == num2)
        printf("%d is equal to %d\n", num1, num2);
    else
        printf("%d is not equal to %d\n", num1, num2);

    // Not equal to
    if (num1 != num2)
        printf("%d is not equal to %d\n", num1, num2);
    else
        printf("%d is equal to %d\n", num1, num2);

    // Greater than
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    else
        printf("%d is not greater than %d\n", num1, num2);

    // Less than
    if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);
    else
        printf("%d is not less than %d\n", num1, num2);

    // Greater than or equal to
    if (num1 >= num2)
        printf("%d is greater than or equal to %d\n", num1, num2);
    else
        printf("%d is not greater than or equal to %d\n", num1, num2);

    // Less than or equal to
    if (num1 <= num2)
        printf("%d is less than or equal to %d\n", num1, num2);
    else
        printf("%d is not less than or equal to %d\n", num1, num2);

    return 0;
}
