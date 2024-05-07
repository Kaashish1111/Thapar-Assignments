#include <stdio.h>

int main() {
    // Define arrays for names, roll numbers, and marks
    char names[3][50];
    int roll_numbers[3];
    float marks[3];

    // Input data for three students
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &roll_numbers[i]);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Output data for all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", names[i], roll_numbers[i], marks[i]);
    }

    return 0;
}
