#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = "3.145"; // Initializing a string
    
    // Using type casting functions to convert string to different data types
    double d = atof(s); // Convert string to double
    int i = atoi(s);    // Convert string to integer
    long l = atol(s);   // Convert string to long integer

    // Printing the converted values
    printf("String: %s\n", s);
    printf("Double: %f\n", d);
    printf("Integer: %d\n", i);
    printf("Long: %ld\n", l);

    return 0;
}
