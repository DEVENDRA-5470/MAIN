#include <stdio.h>

Certainly! Here are the key points summarizing the mutability of arrays in C:

1. **Modifiability:**
   - Arrays in C are mutable, meaning that elements within the array can be changed after the array is initialized.

2. **Direct Access:**
   - Elements of an array can be accessed and modified directly using their index, facilitating efficient data manipulation.

3. **Dynamic Updates:**
   - Array elements can be dynamically updated or modified during program execution based on the logic and requirements of the program.

4. **Element-level Control:**
   - Each element in the array can be individually modified independently of others, allowing for fine-grained control over data stored in the array.

5. **Efficient Data Manipulation:**
   - Mutability of arrays enables efficient operations such as sorting, searching, and updating data stored in the array elements.

These points highlight the ability of arrays in C to be dynamically modified, making them versatile for handling and manipulating collections of data effectively in programs.

int main() {
    // Declaration and initialization of an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Accessing and printing elements of the array
    printf("First element: %d\n", numbers[0]);   // Output: First element: 10
    printf("Third element: %d\n", numbers[2]);   // Output: Third element: 30
    printf("Last element: %d\n", numbers[4]);    // Output: Last element: 50
    
    return 0;
}
