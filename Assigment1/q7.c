#include <stdio.h>
#include <math.h>

int main() {
    double number, root;
    int n;

    // Input the number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Input the value of n (root)
    printf("Enter the value of n (root): ");
    scanf("%d", &n);

    // Calculate the Nth root using the pow() function from math.h
    if (number >= 0 || n % 2 != 0) {
        root = pow(number, 1.0 / n);
        printf("The %dth root of %.2lf is %.2lf\n", n, number, root);
    } else {
        printf("Error: Even root of a negative number is undefined.\n");
    }

    return 0;
}

