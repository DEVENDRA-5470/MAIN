#include <iostream>
#include <string>
using namespace std;

void testing() {
    string name;
    int age;

    // Take full name input
    cout << "ENTER YOUR NAME: ";
    getline(cin, name);
    cout << "ENTER YOUR AGE : ";
    cin >> age ;



    // Print output
    cout << "Name: " << name << endl;
    cout << "Age:" << age << endl;

}

// Driver Code
int main() {
    testing();
    return 0;
}
