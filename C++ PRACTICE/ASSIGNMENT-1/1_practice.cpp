#include<stdio.h>
#include<string.h>
// ----------------------------------------- 1 ------------------------------------------------
// 1.Write a program to find sum of induvidual digits of a positive number.

/*int sum_of_digits(int number) {
    int total_sum = 0;
    while (number > 0) {
        total_sum += number % 10;
        number /= 10;
    }

    return total_sum;
}

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Sum of digits: %d\n", sum_of_digits(number));
    } else {
        printf("Please enter a positive number.\n");
    }

    return 0;
}*/


// ----------------------------------------- 2 ------------------------------------------------
// 2.Write a c programme to find both the largest and smallest number in a list of integers using an Array.
/*
int greatest(int my_arr[], int size_arr) {
    int maxa = my_arr[0];
    for(int i = 1; i < size_arr; i++) {
        if (maxa < my_arr[i]) {
            maxa = my_arr[i];
        }
    }
    return maxa;
}


int smallest(int my_arr[], int size_arr) {
    int maxa = my_arr[0];
    for(int i = 1; i < size_arr; i++) {
        if (maxa > my_arr[i]) {
            maxa = my_arr[i];
        }
    }
    return maxa;
}

int main() {
    int my_arr[] = {23, 22, 12, 15, 27, 87, 45, 67};
    int size_arr = sizeof(my_arr) / sizeof(my_arr[0]);
    printf("Enter 1 For Greatest :\nEnter 2 For Smallest :");
    int choose;
    scanf("%d",&choose);
    if (choose==1){
       printf("Greatest: %d", greatest(my_arr, size_arr));
    }
    else if (choose=2){
        printf("Smallest : %d",smallest(my_arr, size_arr));
    }

    return 0;
}*/
// ----------------------------------------- 3 ------------------------------------------------
/*
// 3.Write a c program to find the largest among 3 numbers:

int great_three(){
    int a,b,c;
    printf("Enter number num1 ,num2 ,num3 :\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c)){
        printf("Greatest among three is : %d",a);
    }
    else if ((b>a) && (b>c)){
        printf("Greatest among three is : %d",b);
    }
    else{
        printf("Greatest among three is : %d",c);
    }
}

int main(){
    great_three();
    return 0;
}
*/


// ----------------------------------------- 4 ------------------------------------------------
/*
// 4. C program to store information of Student (Name ,Roll Number ,Marks)

struct Student_data{
    char name[50];
    int roll_no;
    float marks;
};

struct Student_data s1={"RITIKA",45,89.89};
struct Student_data s2={"RANDEEP",40,99.89};

int show_detail(){
    printf("Student Name :%s\n",s1.name);
    printf("Student Roll No. :%d\n",s1.roll_no);
    printf("Student Marks :%f\n\n",s1.marks);

    printf("Student Name :%s\n",s2.name);
    printf("Student Roll No. :%d\n",s2.roll_no);
    printf("Student Marks :%f\n\n",s2.marks);
}

int main(){
    show_detail();
    return 0;
}
*/


// ----------------------------------------- 5 ------------------------------------------------
/*
// 5. Write a C program using structure to store details about a book (title, author, yearPublished, price)

struct Book_data{
    char title[50];
    char author[50];
    int year;
    double price;
};

struct Book_data b1={"Python-Programming","Ms.Dhoni",4000,1.50};
struct Book_data b2={"C and C++ Progamming","Puneet Superstar",2026,45.20};

int show_detail(){
    printf("Book title :%s\n",b1.title);
    printf("Author name : %s\n",b1.author);
    printf("Publish Year :%d\n",b1.year);
    printf("Price : %f\n\n",b1.price);

    printf("Book title :%s\n",b2.title);
    printf("Author name : %s\n",b2.author);
    printf("Publish Year :%d\n",b2.year);
    printf("Price : %f\n\n ",b2.price);
}

int main(){
    show_detail();
    return 0;
}
*/

//---------------------------------------- 6 -----------------------------------------------
/*
// 6. Write a C program to create Fibonacci series
int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
*/


//---------------------------------------- 7 -----------------------------------------------

/*
// 7. Write a C program to check if a number is prime or not.

void prime() {
    int n = 70;
    int i;
    int is_prime = 1;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}

int main() {
    prime();
    return 0;
}
*/

// ----------------------------------- 8 -------------------------------------------
/*
// 8. Write a C program for concatenating two strings.

#include <stdio.h>
#include <string.h>

void concat() {
    char name1[100] = "How";
    char name2[100] = " are you";

    strcat(name1, name2);

    // Print the result
    printf("%s\n", name1);
}

int main() {
    concat();
    return 0;
}
*/

//------------------------------------------------ 9 ------------------------------------------.
/*
// 9. C program to perform addition, subtraction, multiplication, and division using user-defined functions.
void add(){
    int a,b;
    printf("Enter num 1 and num 2 : \n ");
    scanf("%d %d",&a ,&b);
    int res = a+b;
    printf("TOTAL : %d",res);
}
void sub(){
    int a,b;
    printf("Enter num 1 and num 2 : \n ");
    scanf("%d %d",&a ,&b);
    int res = a-b;
    printf("TOTAL : %d",res);
}
void mul(){
    int a,b;
    printf("Enter num 1 and num 2 \n :");
    scanf("%d %d",&a ,&b);
    int res = a*b;
    printf("TOTAL : %d",res);
}
void div(){
    int a,b;
    printf("Enter num 1 and num 2 \n :");
    scanf("%d %d",&a ,&b);
    int res = a/b;
    printf("TOTAL : %d",res);
}

int main(){
    add();
    //sub();
    //mul();
    //div();
    return 0;
}
*/

// ---------------------------------------- 10 ------------------------------------
/*
// 10. Write a C program to find the Sum of Array Elements
int arr_sum(int arr[] ,int size_arr){
    int sum=0;
    for (int i=0 ; i<size_arr ; i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
    int arr[]={10,20,30,1,2};
    int size_arr=(sizeof(arr)/sizeof(arr[0]));
    int res=arr_sum(arr,size_arr);
    printf("Sum = %d",res);
}
*/


//----------------------------- 12 ----------------------------
/*
// 12. Write a C Macro for Swapping Two Numbers.

#define SWAP(a, b) { \
    typeof(a) \
    temp = a; \
    a = b; \
    b = temp; \
}


int main() {
    int x = 5, y = 10;
    SWAP(x, y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
*/

//-------------------------------- 13 ------------------------------
/*
// 14. Create a simple calculator that performs basic arithmetic operations (addition,
//subtraction, multiplication, and division) on two integer operands.

void add(){
    int a,b;
    printf("Enter num 1 and num 2 : \n ");
    scanf("%d %d",&a ,&b);
    int res = a+b;
    printf("TOTAL : %d",res);
}
void sub(){
    int a,b;
    printf("Enter num 1 and num 2 : \n ");
    scanf("%d %d",&a ,&b);
    int res = a-b;
    printf("TOTAL : %d",res);
}
void mul(){
    int a,b;
    printf("Enter num 1 and num 2 \n :");
    scanf("%d %d",&a ,&b);
    int res = a*b;
    printf("TOTAL : %d",res);
}
void div(){
    int a,b;
    printf("Enter num 1 and num 2 \n :");
    scanf("%d %d",&a ,&b);
    int res = a/b;
    printf("TOTAL : %d",res);
}

void menu(){
    char opr;
    printf("CHOOSE OPERATION + , - , * , / : \n");
    scanf("%c",&opr);
    if (opr=='+'){
        add();
    }
    else if (opr=='-'){
        sub();
    }
    else if (opr=='*'){
        mul();
    }
    else if (opr=='/'){
        div();
    }
    else{
        printf("Wrong Input...");
    }


}

int main(){
    menu();
    return 0;
}
*/

// ------------------------------------- 14 -----------------------------
// 14. Write a Macro to Calculate the Cube of a Number.

// #define CUBE(a) ((a)*(a)*(a))
// #include <stdio.h>

// int main() {
//     int x = 3;
//     int result = CUBE(x);
//     printf("Cube of %d is %d\n", x, result);
//     return 0;
// }


// ---------------------------------------- 15 -----------------------------------------------
// 15. Write a Macro to Check if a Number is Even or Odd.


// #define ODD_EVEN(a) ((a) % 2 == 0 ? "Even" : "Odd")

// int main() {
//     int number = 5;
//     printf("%d is %s\n", number, ODD_EVEN(number));

//     number = 4;
//     printf("%d is %s\n", number, ODD_EVEN(number));

//     return 0;
// }

//---------------------------------------- 16 --------------
// 16. Write a program to demonstrate call by value
// int call_by_value(int a , int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("Value after Swap :%d %d",a,b);

// }
// int call_by_reference(int *a , int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("Value after Swap :%d %d",*a,*b);

// }


// int main(){
//     int a=12 ,b=20;
//     // call_by_value(a,b);
//     call_by_reference(&a,&b);
//     return 0;
// }


//---------------------------------------------- 18
// 18. C program to find the length of the string.
// void length_string(){
//     char name[50]="Manipal";
//     int length=0;
//     for(int i=0 ; name[i] != '\0' ; i++){
//         length+=1;
//         printf("%c",name[i]);
//     }
//     printf("\n");
//     printf("Length:%d ",length);


// }

// int main(){
//     length_string();
//     return 0;
// }

// --------------------------------- 19
// 19. C program to compare 2 string.
// int main() {
//     char str1[] = "Hello";
//     char str2[] = "World";
    
//     int result = strcmp(str1, str2);
    
//     if (result == 0) {
//         printf("The strings are equal.\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2.\n");
//     } else {
//         printf("str1 is less than str2.\n");
//     }
    
//     return 0;
// }

//---------------------------------- 20
// 20. C Program to Calculate the Factorial of a Number.
// int fact(int a){
//     int factorial=1;
//     for(int i=1 ; i<=a ; i++){
//         factorial *=i;
//     }
//     return factorial;
// }

// int main(){
//     int a=5;
//     int res=fact(a);
//     printf("Factorial : %d",res);
//     return 0;
// }


//------------------------------------- 21
// 21. C Program to Reverse a Number.
int reverse_number(int num){
    int rev=0;
    while (num > 0){
        rev+=1;
        printf("%d",num);
        num /=10;
    }
    printf("%d",rev);
        
}

int main(){
    int num=123;
    reverse_number(num);
    // printf("RESULT : %d",res);
}



