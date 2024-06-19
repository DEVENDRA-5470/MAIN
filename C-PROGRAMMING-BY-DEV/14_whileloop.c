#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    int i = start;
    while (i <= end) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    int i = start;
    while (i <= end) {
        // Skip printing numbers that are multiples of 3
        if (i % 3 == 0) {
            i++;
            continue;  // Skip current iteration and continue with the next iteration
        }

        // Exit the loop if i reaches 17
        if (i == 17) {
            break;  // Exit the loop
        }

        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int rows = 10;  // Number of rows
    int cols = 10;  // Number of columns
    int i = 1;

    while (i <= rows) {
        int j = 1;
        while (j <= cols) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}


