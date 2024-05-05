// Display first n prime numbers.
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
// Function to display the first n prime numbers
void displayPrimes(int n) {
    int count = 0;
    int number= 2; // Starting from the first prime number
    
    printf("First %d prime numbers are:\n", n);
    
    // Loop until we find n prime numbers
    while (count < n) {
        if (isPrime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    displayPrimes(n);
    return 0;
}