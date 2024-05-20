#include <stdio.h>
int main()
{
    int a[50], a2[50], c[50];
    int size_1, size_2, count = 0;

    printf("Enter the number of elements you want in the first array: ");
    scanf("%d", &size_1);
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size_1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements you want in the second array: ");
    scanf("%d", &size_2);
    printf("Enter the elements of the second array: ");
    for (int j = 0; j < size_2; j++) {
        scanf("%d", &a2[j]);
    }

    for (int i = 0; i < size_1; i++) {
        for (int j = 0; j < size_2; j++) {
            if (a[i] == a2[j]) {
                c[count] = a[i];
                count++;
                break;
            }
        }
    }

    printf("The common elements are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}