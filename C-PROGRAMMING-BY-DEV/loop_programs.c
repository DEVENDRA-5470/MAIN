#include <stdio.h>
// ------------ FOR LOOP
int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd and Even numbers up to %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d (Odd) ", i);
        } else {
            printf("%d (Even) ", i);
        }
    }

    return 0;
}

-------------------------------
#include <stdio.h>

int main() {
    int n, i;
    int count_odd = 0, count_even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            count_odd++;
        } else {
            count_even++;
        }
    }

    printf("Number of odd numbers up to %d: %d\n", n, count_odd);
    printf("Number of even numbers up to %d: %d\n", n, count_even);

    return 0;
}
--------------------------------------