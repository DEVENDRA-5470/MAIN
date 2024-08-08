#include<iostream>
using namespace std;

void first(){
    for (int row=0; row<=6 ; row++){

        for (int col=0 ;row>col ; col++){
          cout<<"* ";
        }
        cout<<""<<endl;
    }
}

void second(){
    for (int row=0; row<=6 ; row++){

        for (int col=6 ;col-row ; col--){
          cout<<"  ";
        }

        for (int col2=0 ; row>col2 ;col2++){
            cout<<"* ";
        }
        cout<<""<<endl;
    }
}

int main(){
    //first();
    second();
    return 0;
}
