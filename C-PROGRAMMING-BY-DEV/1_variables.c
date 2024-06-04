#include <stdio.h>
// 1.Variable is a memory named location that responsible for storing data.
// 2.Variables have a specific data type, which determines the type of data they can hold.

// 3 phase of variables
    // 1. Declaration
    // 2. Define
    // 3. Initilize

    // syntax  
        // data_type variable_name = data

        // Ex.  int x ;   // Declare
            //  x=12 ;   // Define and Initilize



// Programmes.----------------------------------------------------------------------
// Addition
void add() {
    printf("-------THIS IS ADDITION FUNCTION ---------\n");
    int n = 10;
    int n1 = 20;
    int res = n + n1;
    printf("The sum of %d and %d is %d \n \n", n1, n, res);
    printf("Address of res: %p\n", (void *)&res);
    printf("Address of n: %p\n", (void *)&n);
    printf("Address of n1: %p\n", (void *)&n1);
}
// Subtraction
void subtract() {
    printf("------THIS IS SUBTRACT FUNCTION :--------\n");
    int a = 45;
    int b = 18;
    int sub = a - b;
    printf("SUBTRACT OF A AND B : %d\n", sub);
}
// Multiplication
void multiply() {
    printf("\n-----This is the multiply function-----------: \n");
    int x = 6;
    int y = 9;
    int mul = x * y;
    printf("%d multiplied by %d equals %d\n\n", x, y, mul);
}
// Division
void division() {
    printf("\n------This is the Division Function--------\n");
    int x = 11;
    int y = 5;
    int div = x / y;
    printf("The division of %d and %d is : %d \n", x, y, div);
}
// Modulus
void modulus() {
    printf("\n-------This is modulus function----------\n");
    int x = 20;
    int y = 30;
    int res = x % y;
    printf("The Modulus of %d and %d is : %d \n", x, y, res);
}
// Greet
// void greet() {
//     char n[10];
//     printf("Enter your name: ");
//     fgets(n, sizeof(n), stdin);  // Use fgets instead of gets
//     printf("Your name is: %s\n", n);
// }


int main() {
    add();
    subtract();
    multiply();
    division();
    modulus();
    // greet();
    return 0;
}

    // char


// We use getchar() to read a single character from the standard input.
// We use putchar() to output the character to the standard output.
//  putchar() is used for outputting a single character.

    // void name(){
    //     char s;
    //     s =getchar(); // single chars 
    //     printf("My Name Is %c \n",s);
    // }
    // name();


    // void message(){
    //     // char msg[]="Hello World";
    //     char msg;
    //     msg=getchar();
    //     putchar(msg);
    // }
    // message();

// gets(): This function is used to read a string from the standard input (usually the keyboard) and store it in a character array. 
// puts(): This function is used to output a string to the standard output (usually the console). It prints the string followed by a newline character ('\n') to the standard output.


