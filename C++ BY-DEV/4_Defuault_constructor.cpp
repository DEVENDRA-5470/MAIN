#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "John Doe";  // Assigning a default name
        age = 30;           // Assigning a default age
    }

    // Function to display Person details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Using the default constructor
    Person person1;
    person1.display();

    return 0;
}
