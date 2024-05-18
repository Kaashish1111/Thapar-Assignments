#include <stdio.h>

void findIntersection(int a[], int b[], int n, int m) {
    int i, j, count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                count++;
                break;
            }
        }
    }
    if (count == 0) {
        printf("No common elements found.");
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    findIntersection(a, b, n, m);
    return 0;
}