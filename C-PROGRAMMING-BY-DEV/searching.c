#include <stdio.h>

// Function to perform linear search on an array
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return index of key if found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = { 2, 5, 7, 9, 13, 22, 4, 8 };
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int key = 13; // Element to search for

    // Perform linear search
    int index = linearSearch(arr, n, key);

    // Check if key was found
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
