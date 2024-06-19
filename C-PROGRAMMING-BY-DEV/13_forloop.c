#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    // Iterating over the range [start, end]
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}







#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    // Iterating over the range [start, end]
    for (int i = start; i <= end; i++) {
        // Skip printing numbers that are multiples of 3
        if (i % 3 == 0) {
            continue;  // Skip current iteration and continue with the next iteration
        }

        // Exit the loop if i reaches 15
        if (i == 17) {
            break;  // Exit the loop
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}



#include <stdio.h>

int main() {
    // Example: Printing a multiplication table from 1 to 5
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
