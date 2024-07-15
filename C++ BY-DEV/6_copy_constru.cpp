#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Copy constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    // Function to set the name and age
    void setData(const std::string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display Person details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Using the default constructor
    Person person1;
    person1.setData("Alice", 30);
    person1.display();

    // Using the copy constructor
    Person person2 = person1; // Can also be written as Person person2(person1);
    person2.display();

    return 0;
}
