#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int ans = n * factorial(n - 1);
        return ans;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    int result = factorial(num);
    printf("The factorial of given number is: %d", result);
    return 0;
}