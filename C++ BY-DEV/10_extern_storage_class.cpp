    // 1. The extern storage class is used to declare a global variable or function that is defined in another file.
    // 2. It tells the compiler that the variable or function exists, but its definition is located elsewhere.
    // 3. Default value = Undefined, as extern just declares the variable or function without initializing it.
    // 4. Scope or Visibility = The variable or function can be accessed from any file in the program where it is declared as extern.
    // 5. Storage = RAM, as with all global variables.
    // 6. Extern variables must be defined in exactly one file. Other files can use the extern declaration to access it.

#include <iostream>
using namespace std;

// Declaration of the external variable
extern int globalCounter;

void printGlobalCounter() {
    cout << "Global Counter: " << globalCounter << endl;
}

int main() {
    printGlobalCounter();  // Output will be "Global Counter: 42"
    cout << "Global Counter: " << globalCounter << endl;
    return 0;
}
