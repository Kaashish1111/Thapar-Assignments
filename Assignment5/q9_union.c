#include <stdio.h>
#include <stdlib.h>

void getUnion(int a[], int n, int b[], int m) {
    int i, j, k;
    i = j = k = 0;
    int c[100] = {0}; // assuming maximum size of array is 100

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (!c[a[i]]) {
                c[k++] = a[i];
            }
            i++;
        } else if (b[j] < a[i]) {
            if (!c[b[j]]) {
                c[k++] = b[j];
            }
            j++;
        } else {
            if (!c[a[i]]) {
                c[k++] = a[i];
            }
            i++;
            j++;
        }
    }

    // print remaining elements of a[] and b[]
    while (i < n) {
        if (!c[a[i]]) {
            c[k++] = a[i];
        }
        i++;
    }

    while (j < m) {
        if (!c[b[j]]) {
            c[k++] = b[j];
        }
        j++;
    }

    printf("Number of elements after union operation: %d\n", k);
    printf("The union set of both arrays is : ");
    for (int i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2,3};
    int b[] = {9, 4, 5, 6, 8, 10, 4, 6, 5, 4};
    getUnion(a, 3, b, 10);
    return 0;
}