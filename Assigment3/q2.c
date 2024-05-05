#include<stdio.h>
int main() {
    int x, y, z;
    printf("Enter three different numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x == y || x == z || y == z) {
        printf("Numbers are not distinct\n");
    }
    else if (x > y && x > z) {
        printf("The greatest number is: %d\n", x);
    }
    else if (y > z) {
        printf("The greatest number is: %d\n", y);
    }
    else {
        printf("The greatest number is: %d\n", z);
    }

    return 0;
}
