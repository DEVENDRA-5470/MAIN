#include<stdio.h>

int main(){
    switch1();
    return 0;
}

void switch1(){
    int x = 5;
    printf("Value of X is %d\n",x);
    switch(x){
        case 3:
        printf("X is 3");
        break;
        case 4:
        printf("X is 4");
        break;
        default:
        printf("X is not 3 or 4");
        }
}