// #include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     char *max = (a > b) ? (a<b) ? "res" : "No";  // Corrected to use string literals

//     printf("Is %d greater than %d? %s\n", a, b, max);  // Updated format specifier

//     return 0;
// }
#include <stdio.h>

int main() {
    int score = 75;
    char grade;

    // Using nested ternary operators to determine grade
    grade = (score >= 90) ? 'A' :(score >= 80) ? 'B' :(score >= 70) ? 'C' :(score >= 60) ? 'D' : 'F';

    printf("Score: %d, Grade: %c\n", score, grade);

    return 0;
}
