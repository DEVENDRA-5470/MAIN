// Pointers in C can be classified into  different types based on which we are defining their types. If we consider the type of variable stored in the memory location pointed by the pointer, then the pointers can be classified into the following types:
// 1. Integer Pointers
// 2. Array Pointer
// 3. Structure Pointer
// 4. Function Pointers
// 5. Double Pointers
// 6. NULL Pointer
// 7. Void Pointer

// 1.Interger Pointer----------------------------------------------------

// #include<stdio.h>

// int main() {
//     int roll_no = 40;
//     int *p = &roll_no;
    
//     printf("ADDRESS OF p : %p \n", (void*)&p);       
//     printf("ADDRESS OF roll_no : %p \n", (void*)&roll_no);  
//     printf("VALUE OF p (address it points to) : %p \n", (void*)p);
//     printf("VALUE OF roll_no : %d \n", roll_no);  
    
//     return 0;
// }


// 2. Array Pointer-------------------------------------------------------
// #include<stdio.h>
// int main(){
//     int my_arr[]={94,34,33,544,343,33,55,6};
//     int *p=my_arr; // whole array
//     int *ptr=&my_arr;  // 0TH array.
//     int (*ptr5)[5]=&my_arr; // Pointer to an array of 5 integers 


//     printf("ADDRESS OF p : %p \n", (void*)&p);       
//     printf("ADDRESS OF ptr : %p \n", (void*)&ptr);       
//     printf("ADDRESS OF ptr5 : %p \n", (void*)&ptr5);       
//     printf("ADDRESS OF MY_ARR: %p \n", (void*)&my_arr);  
//     printf("VALUE OF p (address it points to) : %p \n", (void*)p);
//     printf("VALUE OF MY_ARR : %d \n", my_arr[0]); 

//     return 0;
// }

// 3.Structure pointer  ---------------------------------------------
// #include<stdio.h>
//    struct Student {
//     int roll_no;
//     char name[50];
//     float marks;
// };

// int main(){
//     struct Student student1 = {101, "John Doe", 85.5};
//     struct Student *ptr = &student1;
//     printf("ADDRESS OF ptr : %p \n",(void*)ptr);
//     // Accessing structure members using the pointer
//     printf("Roll No: %d\n", ptr->roll_no);
//     printf("Name: %s\n", ptr->name);
//     printf("Marks: %.2f\n", ptr->marks);
    
//     return 0;

// }

// 4. Function Pointers----------------------------------------------
// #include <stdio.h>

// // Function declarations
// int add(int a, int b);
// int multiply(int a, int b);

// int main() {
//     // Declare function pointers
//     int (*operation)(int, int);

//     // Assign the address of the add function to the pointer and print it
//     operation = add;
//     printf("Address of add function: %p\n", (void*)operation);

//     // Assign the address of the multiply function to the pointer and print it
//     operation = multiply;
//     printf("Address of multiply function: %p\n", (void*)operation);

//     // Optional: Call the functions through the pointer
//     int result = operation(10, 20);
//     printf("Multiplication Result: %d\n", result);

//     return 0;
// }

// // Function definitions
// int add(int a, int b) {
//     return a + b;
// }

// int multiply(int a, int b) {
//     return a * b;
// }


// 5.Double Pointer----------------------------------------------
// #include <stdio.h>

// int main() {
//     // Declare an integer variable
//     int value = 42;

//     // Declare a pointer to the integer
//     int *single_ptr = &value;

//     // Declare a double pointer
//     int **double_ptr = &single_ptr;

//     // Print the value and addresses
//     printf("Value: %d\n", **double_ptr);                  // Access value through double pointer
//     printf("Address of value: %p\n", (void*)&value);       // Address of value
//     printf("Address stored in single_ptr: %p\n", (void*)single_ptr); // Address stored in single_ptr
//     printf("Address of single_ptr: %p\n", (void*)&single_ptr);  // Address of single_ptr
//     printf("Address stored in double_ptr: %p\n", (void*)double_ptr); // Address stored in double_ptr
//     printf("Address of double_ptr: %p\n", (void*)&double_ptr); // Address of double_ptr

//     return 0;
// }
