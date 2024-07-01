// ------------------ Array in c.
// --------Properties.
Array in C: An array in C is a fixed-size collection of elements of the same data type stored in contiguous memory locations. Elements are accessed using an index, which represents their position relative to the beginning of the array.

2.Fixed-size: Arrays in C have a predetermined number of elements that is specified at compile-time.

3.Same data type: All elements in an array must be of the same data type (e.g., int, char, double).

4.Contiguous memory: Array elements are stored consecutively in memory, allowing for efficient access using index calculations.

5.Index-based access: Elements are accessed using square brackets ([]) with an integer index, starting from 0 for the first element.

6.Mutability: Arrays in C are mutable, meaning that the elements stored within an array can be modified after the array is created. 

// --------Creating an array.
// dataType arrayName[arraySize];
#include <stdio.h>

int main() {
    // Define an array of integers and assign values
    int numbers[5]; // Array of 5 integers
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Define an array of characters and assign values
    char vowels[5]; // Array of 5 characters
    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';

    // Define an array of doubles and assign values
    double prices[10]; // Array of 10 doubles
    prices[0] = 1.99;
    prices[1] = 3.49;
    prices[2] = 2.89;
    prices[3] = 4.99;
    prices[4] = 5.79;
    prices[5] = 6.49;
    prices[6] = 2.19;
    prices[7] = 8.99;
    prices[8] = 7.29;
    prices[9] = 3.99;

    // Output messages to demonstrate array declarations and assigned values
   //  Travesing
    printf("Array of integers 'numbers':\n");
    for (int i = 0; i < 5; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nArray of characters 'vowels':\n");
    for (int i = 0; i < 5; ++i) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
    }

    printf("\nArray of doubles 'prices':\n");
    for (int i = 0; i < 10; ++i) {
        printf("prices[%d] = %.2f\n", i, prices[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    // Define and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of 5 integers
    
    // Define and initialize an array of characters
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; // Array of 5 characters
    
    // Define and initialize an array of doubles
    double prices[10] = {1.99, 3.49, 2.89, 4.99, 5.79, 6.49, 2.19, 8.99, 7.29, 3.99}; // Array of 10 doubles
    
    // Output messages to demonstrate array declarations and initialized values
    printf("Array of integers 'numbers':\n");
    for (int i = 0; i < 5; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nArray of characters 'vowels':\n");
    for (int i = 0; i < 5; ++i) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
    }

    printf("\nArray of doubles 'prices':\n");
    for (int i = 0; i < 10; ++i) {
        printf("prices[%d] = %.2f\n", i, prices[i]);
    }

    return 0;
}

//  updating
#include <stdio.h>

int main() {
    // Define and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of 5 integers
    
    // Define and initialize an array of characters
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; // Array of 5 characters
    
    // Define and initialize an array of doubles
    double prices[10] = {1.99, 3.49, 2.89, 4.99, 5.79, 6.49, 2.19, 8.99, 7.29, 3.99}; // Array of 10 doubles
    
    // Output messages to demonstrate array declarations and initialized values
    printf("Original array of integers 'numbers':\n");
    for (int i = 0; i < 5; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nOriginal array of characters 'vowels':\n");
    for (int i = 0; i < 5; ++i) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
    }

    printf("\nOriginal array of doubles 'prices':\n");
    for (int i = 0; i < 10; ++i) {
        printf("prices[%d] = %.2f\n", i, prices[i]);
    }

    // Update values in the arrays
    numbers[2] = 35; // Update third element in 'numbers'
    vowels[1] = 'u'; // Update second element in 'vowels'
    prices[4] = 5.99; // Update fifth element in 'prices'

    // Output messages to demonstrate updated arrays
    printf("\nUpdated array of integers 'numbers':\n");
    for (int i = 0; i < 5; ++i) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nUpdated array of characters 'vowels':\n");
    for (int i = 0; i < 5; ++i) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
    }

    printf("\nUpdated array of doubles 'prices':\n");
    for (int i = 0; i < 10; ++i) {
        printf("prices[%d] = %.2f\n", i, prices[i]);
    }

    return 0;
}
