// Keep reading in integers until one integer larger than 100 is not input. For example: 4 -
// 90, 35, 78, 110 QUIT! (since 110 is bigger than 100)
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n <= 100) {
        printf("Enter another number: ");
        scanf("%d", &n);
    }

    printf("%d is bigger than 100. QUIT!\n", n);

    return 0;
}
