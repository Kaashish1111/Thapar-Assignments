#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    // +=
    num1 += num2; // equivalent to num1 = num1 + num2
    printf("+= : num1 = %d\n", num1); // Output: 15

    // -=
    num1 -= num2; // equivalent to num1 = num1 - num2
    printf("-= : num1 = %d\n", num1); // Output: 10

    // *=
    num1 *= num2; // equivalent to num1 = num1 * num2
    printf("*= : num1 = %d\n", num1); // Output: 50

    // /=
    num1 /= num2; // equivalent to num1 = num1 / num2
    printf("/= : num1 = %d\n", num1); // Output: 10

    // %=
    num1 %= num2; // equivalent to num1 = num1 % num2
    printf("%%= : num1 = %d\n", num1); // Output: 0

    return 0;
}
