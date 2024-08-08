// Assignment: Swapping Values of Variables
// 1.Write a program to swap the values of two variables.
// a = 10
// b = 20
// AFTER SWAPPING:
// a = 20
// b = 10


// 2.Write a program to swap the values of two variables.
// a = "dreamer"
// b = "infotech"
// AFTER SWAPPING:
// a = "infotech"
// b = "dreamer"

#include<iostream>
using namespace std;
void swapping(){
    int a,b,z;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Before swapping a = "<<a<<" b = "<<b<<endl;
    // using addition
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // using third variable
    // z=a;
    // a=b;
    // b=z;
    // using pointer
    int *p=&a,*q=&b;
    int *temp=p;
    p=q;
    q=temp;


    cout<<"After swapping a = "<<a<<" b = "<<b<<endl;
}

void swapping2(){
    string a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    // using third variable
    // c=a;
    // a=b;
    // b=c;

    // Using pointer
    string *p=&a,*q=&b;
    string *temp=p;
    p=q;
    q=temp;
    cout<<"After swapping a = "<<*p<<" b = "<<*q<<endl;

}


int main(){
    // swapping();
    swapping2();
    return 0;
}
