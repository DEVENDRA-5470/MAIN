#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z;

    z = ++x;   // Increment x by 1 first, then assign to z (z = 11, x = 11)
    printf("x = %d, z = %d\n", x, z);

    z = y--;   // Assign y to z first, then decrement y by 1 (z = 20, y = 19)
    printf("y = %d, z = %d\n", y, z);

    int a = 5;
    int b = -a;  // Unary minus (b = -5)

    printf("b = %d\n", b);

    return 0;
}
