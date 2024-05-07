// Nested structures are structures that contain other structures as members. They are commonly used to represent hierarchical or complex data structures. One real-world application of nested structures is in modeling data for a university system. Here's a simple example:

#include <stdio.h>
// Define a structure for Address
struct Address {
    char street[50];
    char city[50];
    char state[20];
    int zipcode;
};

// Define a structure for Student
struct Student {
    int studentID;
    char name[50];
    struct Address address; // Nested structure
};

int main() {
    // Declare and initialize a student
    struct Student student1 = {101, "Alice", {"123 Main St", "Anytown", "NY", 12345}};

    // Access and print student details
    printf("Student ID: %d\n", student1.studentID);
    printf("Name: %s\n", student1.name);
    printf("Address: %s, %s, %s, %d\n", student1.address.street, student1.address.city, student1.address.state, student1.address.zipcode);

    return 0;
}
