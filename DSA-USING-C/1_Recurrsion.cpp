#include<iostream>
using namespace std;
class Noob_hu{
public:
    int sum=0;
    int add(int a){

        if (a==0){
            return 0;
        }

        //cout << "Hello :" << a << endl;
        add(a-1);
        sum=sum+a;
        //cout << "Hello :" << " 2 "<< "X " << a << " = " << 2*a << endl;

    }

};

int main(){
    Noob_hu dev;
    int a=10;
    dev.add(a);
    cout << "Total :" << dev.sum <<  endl;
    return 0;
}
