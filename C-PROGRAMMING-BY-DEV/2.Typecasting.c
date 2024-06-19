// There are two main types of type conversions: 
// implicit conversion and explicit conversion.

// 1.Implicit Conversion:Also known as automatic type conversion, occurs when the compiler automatically converts one data type into another without the need for any explicit instructions from the programmer. This typically occurs in situations where a small data type is assigned to a big data type, 

// Ex.int a = 10;
// double b = a; // Implicit conversion from int to double

// 2.Explicit Conversion: Explicit conversion, also known as type casting, occurs when the programmer explicitly instructs the compiler to convert one data type into another. This is done by specifying the desired data type in parentheses before the value or variable to be converted.

// double c = 3.14;
// int d = (int) c; // Explicit conversion from double to int

#include<stdio.h>
#include <stdlib.h>

int main(){
    printf("---------Int to Float--------\n");
    int_to_float();
    printf("---------Float to Int--------\n");
    float_to_int();
    printf("---------Str to Int--------\n");
    str_to_int();
    printf("---------Int to Str--------\n");
    int_to_str();
    return 0;
}

void int_to_float(){
    
    int a = 10;
    float b = (float)a;
    printf("The integer value is: %d\n", a);
    printf("The float value is: %f\n", b);
    

}

void float_to_int(){
    
    float a = 10.90;
    int b = (int)a;
    printf("The float value is: %f\n", a);
    printf("The int value is: %d\n", b);


}

#define typeof(var) _Generic((var), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    char *: "string", \
    default: "unknown" \
)

void str_to_int() {
    char a[] = "10"; // Define a as a character array
    int b = atoi(a);
    printf("The char value is: %s\n", a); // Print the string
    printf("The int value is: %d\n", b);
    printf("The type of b is: %s\n", typeof(b)); // Print the type of b
}


void int_to_str(){
    int a = 10;
    char b[20];
    sprintf(b, "%d", a);
    printf("The int value is: %d\n", a);
    printf("The char value is: %s\n", b);
    printf("The type of b is: %s\n", typeof(b));

}