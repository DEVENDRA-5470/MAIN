#include <iostream>
#include <typeinfo>

int main() {
    // 1. The auto storage class is the default storage class for all local variables .
    // 2. When you use auto keyword compiler automatically determine the type of variable according to type of data.
    // 3.Default value = Garbage
    // 4.Scope or Visibility = limited to the block in which they are defined.
    // 5.Storage = RAM
    // 6.Every local variable in c by default automatic variable.
    auto num = 10;
    auto pi = 3.14;
    auto character = 'A';

    std::cout << "Type of num: " << typeid(num).name() << std::endl;
    std::cout << "Type of pi: " << typeid(pi).name() << std::endl;
    std::cout << "Type of character: " << typeid(character).name() << std::endl;

    return 0;
}
