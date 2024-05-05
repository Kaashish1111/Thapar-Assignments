#include <stdio.h>
int main()
{
    int *x;
    float *y;
    char *z;
    printf("%zu\n", sizeof(x));
    printf("%zu\n", sizeof(y));
    printf("%zu\n", sizeof(z));
    return 0;
}