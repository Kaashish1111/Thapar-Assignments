#include <stdio.h>

// Define a structure for student
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Declare an array of structures for three students
    struct Student students[3];

    // Input data for three students
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_number);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Output data for all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    return 0;
}
