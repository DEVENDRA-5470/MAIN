#include <stdio.h>

int main() {
    int arr[] = {10, 40, 30, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    // Find maximum element in array
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element in array: %d\n", max);

    return 0;
}
