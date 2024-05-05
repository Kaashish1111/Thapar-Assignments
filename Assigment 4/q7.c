// hcf of two numbers
#include <stdio.h>
int hcf(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    return n1;
}
int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    int result = hcf(num1, num2);
    printf("%d ", result);
    return 0;
}