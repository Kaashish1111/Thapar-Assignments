#include <stdio.h>

int main() {
    int num = 10; // Binary representation: 0000 1010

    // Shift left operator (<<)
    int shifted_left = num << 2; // Shift bits of num to the left by 2 positions
    printf("After shifting left by 2 positions: %d\n", shifted_left); // Output: 40

    // Shift right operator (>>)
    int shifted_right = num >> 1; // Shift bits of num to the right by 1 position
    printf("After shifting right by 1 position: %d\n", shifted_right); // Output: 5

    return 0;
}
