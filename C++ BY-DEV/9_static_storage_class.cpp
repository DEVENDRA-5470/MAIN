#include <iostream>
using namespace std;

void increment() {
    // 1. The static storage class is used to extend the lifetime of variables to the entire runtime of the program.
    // 2. When you use the static keyword, the variable retains its value between function calls.
    // 3. Default value = Zero (0) for uninitialized static variables.
    // 4. Scope or Visibility = Limited to the block in which they are defined .
    // 5. Storage = Static memory (usually a section of RAM specifically for static variables).
    // 6. Static variables in C maintain their value across multiple function calls and are initialized only once.

    static int counter = 0;  // Static local variable
    counter++;
    cout << "Counter:"<< counter <<endl;
}

int main() {
    increment();  // Output: Counter: 1
    increment();  // Output: Counter: 2
    increment();  // Output: Counter: 3
    return 0;
}
