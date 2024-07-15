#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Parameterized constructor
    Person(const std::string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display Person details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating objects using the parameterized constructor
    Person person1("Alice", 30);
    person1.display();

    Person person2("Bob", 25);
    person2.display();

    return 0;
}
