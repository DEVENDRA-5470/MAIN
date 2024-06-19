#include <stdio.h>

void assignValues() {
    int a,b,c;
    a = 10;
    b = 20;
    c = 30;
    a+=10;
    b*=60;
    // c/=3;
    c-=10;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
}

int main() {
    assignValues();
    return 0;
}
