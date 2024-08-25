// In computing, macros are a way to define and use reusable code snippets or constants. The name reflects their purpose: to abstract and simplify repetitive or complex pieces of code.

#include<stdio.h>
#define SWAP(a, b) { \
    typeof(a) \
    temp = a; \
    a = b; \
    b = temp; \
}


int main() {
    int x = 5, y = 10;
    SWAP(x, y);
    printf("x: %d, y: %d\n", x, y);  
    return 0;
}