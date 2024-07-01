#include <stdio.h>
#include <string.h> // Required for strcpy function

#define MAX_STUDENTS 100 // Maximum number of students

// Define a struct named 'Student'
struct Student {
    char name[50];
    int roll_number;
    int age;
    float marks;
};

int main() {
    int num_students;
    struct Student students[MAX_STUDENTS];

    // Prompt user to enter number of students
    printf("Enter number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);

    // Input student details
    for (int i = 0; i < num_students; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // Read until newline, including spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < num_students; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}



// =============================
#include <stdio.h>

// Define a struct named 'Student'
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Initialize a variable of type 'struct Student'
    struct Student student = {"Alice Smith", 20, 85.5};

    // Display student details
    printf("Student Details:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
