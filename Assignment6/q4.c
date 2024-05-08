#include <stdio.h>

int main() {
    // Define an array of different data types
    char charArray[] = {'a', 'b', 'c', 'd'};
    int intArray[] = {1, 2, 3, 4};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4};

    // Verify addresses of adjacent elements in the char array
    printf("Addresses of adjacent elements in the char array:\n");
    for (int i = 0; i < sizeof(charArray) / sizeof(char); i++) {
        printf("Address of charArray[%d]: %p\n", i, (void *)&charArray[i]);
    }

    // Verify addresses of adjacent elements in the int array
    printf("\nAddresses of adjacent elements in the int array:\n");
    for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
        printf("Address of intArray[%d]: %p\n", i, (void *)&intArray[i]);
    }

    // Verify addresses of adjacent elements in the float array
    printf("\nAddresses of adjacent elements in the float array:\n");
    for (int i = 0; i < sizeof(floatArray) / sizeof(float); i++) {
        printf("Address of floatArray[%d]: %p\n", i, (void *)&floatArray[i]);
    }

    return 0;
}