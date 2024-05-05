#include <stdio.h>

int main() {
    int dividend, divisor;
    double quotient;

    // Input dividend and divisor
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Divide the numbers and cast the result to double
    quotient = (double)dividend / divisor;

    // Print the result
    printf("Quotient (after casting to double): %.2f\n", quotient);

    return 0;
}
