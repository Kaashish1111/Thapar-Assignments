#include <stdio.h>

// Define the inner structure for academic information
struct Academics {
    float gpa;
    int graduationYear;
};

// Define the outer structure for personal information
struct Student {
    char name[50];
    int age;
    struct Academics academics;
};

int main() {
    struct Student student1 = {
        "John Doe",
        22,
        {3.5, 2022}
    };

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.academics.gpa);
    printf("Graduation Year: %d\n", student1.academics.graduationYear);

    return 0;
}