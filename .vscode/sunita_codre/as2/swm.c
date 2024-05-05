#include<stdio.h>
int main()
{
    int x,y,z;
    printf("the entered value: ");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf(" The value of x is now: %d",x);
    printf("\nthe value of y is now: %d",y);
    return 0;
}