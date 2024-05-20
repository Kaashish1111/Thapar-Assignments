#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int unique_count = 0;
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < unique_count; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        if (j == unique_count) {
            a[unique_count] = a[i];
            unique_count++;
        }
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}