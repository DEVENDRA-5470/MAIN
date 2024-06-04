// There are two types of data type in C.
// 1. **Primitive Data Types**:
//  These are basic data types that are built into the C language. Examples include:
// * Integers (int)
// * Floating Point Numbers (float)
// * Characters (char)
// * Boolean Values (bool)
//--------------------------------------------------------
// 2. **Non-Primitive Data Types**: 
// These are data types that are derived from the primitive data types. Examples include:
// * Functions
// * Arrays
// * Pointers
// * Structures (struct)
// * Unions (union)
// * Enumerations(Enums)


// **************************************************************************************************************
// 1.Intiger Data Type
// Store: integer number,positive,negative,hexadecimal,octal values.
// Example: int a = 10; int b = -5; int c = 0x10; int d = 012;
// Range:-2,147,483,648 to 2,147,483,647
// Size:4 bytes
// Format identifier: %d
// Modifier : long(4 bytes , %ld) ,long long(8 bytes,%lld) ,short(2 bytes) , signed(default,Positive value) and unsigned(Negative value,%u) .

// Examples:
// #include <stdio.h>

// int main() {
//     long int myLongInteger = 1234567890;
//     long long int myVeryLongInteger = 1234567890123456789LL;
//     short int myShortInteger = 12345;
//     signed int mySignedInt = -123;
//     unsigned int myUnsignedInteger = 1234567890;

//     printf("myLongInteger: %ld\n", myLongInteger);
//     printf("myVeryLongInteger: %lld\n", myVeryLongInteger);
//     printf("myShortInteger: %d\n", myShortInteger);
//     printf("mySignedInt: %d\n", mySignedInt);
//     printf("myUnsignedInteger: %u\n", myUnsignedInteger);

//     return 0;
// }

// %ld is used to print a long int.
// %lld is used to print a long long int.
// %d is used to print a short int and a signed char.
// %u is used to print an unsigned int.


// ************************************************************************************************************
// 2.Float Data Type
// Store: decimal number,positive,negative,exponential values.
// Example: float a = 10.5; float b = -5.5; float c = 1.2e3;
// Range:1.2e-38 to 3.4+38
// Size:4 bytes
// Format identifier: %f
// Modifier : double(8 bytes , %lf) ,long double(10 bytes,%Lf)


// Examples:
// #include <stdio.h>
// int main() {
//     float myFloat = 123.456789;
//     float negfloat = -123.456789;
//     double doublemyFloat = 3.14159;
//     long double myLongFloat = 12;

//     printf("MY FLOAT  :%f\n",myFloat);
//     printf("MY NEG FLOAT  :%f\n",negfloat);
//     printf("MY DOUBLE :%lf\n",doublemyFloat);
//     printf("MY myLongFloat  :%Lf\n",myLongFloat);


// }