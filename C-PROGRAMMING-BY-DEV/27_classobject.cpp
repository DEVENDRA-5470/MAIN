#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string grade;
    string mobileNumber;

    void displayInfo() {
        cout << 
        "Name: " << name << 
        "\nAge: " << age << 
        "\nGrade: " << grade << 
        "\nMobile Number: " << mobileNumber << endl;
    }
};

int main() {
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.grade = "A";
    student1.mobileNumber = "123-456-7890";
    student1.displayInfo();


    Student student2;
    student2.name = "Ritika";
    student2.age = 20;
    student2.grade = "A";
    student2.mobileNumber = "123-456-7890";
    student2.displayInfo();

    return 0;
}
