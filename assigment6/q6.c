#include <stdio.h>

// Function to modify an array and return it
int *modifyArray(int arr[], int size) {
    // Increment each element of the array by 1
    for (int i = 0; i < size; i++) {
        arr[i]++;
    }
    // Return the modified array (pointer to its first element)
    return arr;
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    // Call the function to modify the array
    int *modifiedArray = modifyArray(originalArray, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", modifiedArray[i]);
    }
    printf("\n");

    return 0;
}
