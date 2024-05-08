// WAP to initialize structures, copy one structure whole another and also just a few
// variables of one structure into another.
#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Initialize structures
    struct Person person1 = {"Alice", 25, 5.6};
    struct Person person2;

    // Copy one structure whole another
    person2 = person1;

    // Print person2 after copying
    printf("After copying whole structure:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.1f\n", person2.height);

    // Copy just a few variables of one structure into another
    struct Person person3;
    strcpy(person3.name, person1.name);
    person3.age = person1.age;

    // Print person3 after copying just a few variables
    printf("\nAfter copying just a few variables:\n");
    printf("Name: %s\n", person3.name);
    printf("Age: %d\n", person3.age);

    return 0;
}
