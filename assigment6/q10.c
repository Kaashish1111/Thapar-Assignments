#include <stdio.h>
int main()
{
    int i, j;
    char str[] = "UNIVERSITY";

    for (i = 1; i<=9; i+=2)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    for (i = 7; i >= 1; i=i-2)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}