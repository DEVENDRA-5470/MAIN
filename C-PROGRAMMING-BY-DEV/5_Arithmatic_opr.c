// Arithmetic operators:
// Addition (+)
// Subtraction (-)
// Multiplication (*)
// Division (/)
// Modulus (%)

// Programs=====================================
#include<stdio.h>
void add(){
    int num1, num2,res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    res=num1+num2;
    printf("Sum = %d\n",res);

}

void sub(){
    int num1, num2,res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);   
    res=num1-num2;
    printf("Difference = %d\n",res);
}

void mul(){
    int num1, num2,res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    res=num1*num2;
    printf("Product = %d\n",res);
}

void div(){
    int num1, num2,res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    res=num1/num2;
printf("Quotient = %d\n",res);
}

void modulus(){
    int num1, num2,res;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    res=num1%num2;
    printf("Modulus = %d\n",res);

}



int main(){
    printf("-----------ADDITION-----------\n");
    add();
    printf("-----------SUBTRACTION-----------\n");
    sub();
    printf("-----------MULTIPLICATION-----------\n");
    mul();
    printf("-----------DIVISION-----------\n");
    div();
    printf("-----------MODULUS-----------\n");
    modulus();

    return 0;
}