#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    printf("the compound interest of given data is: ");
    scanf("%d%d%d",&p,&r,&t);
    float ci;
    ci = p*( pow ((1.0+r/100.0),t));
    printf("%f",ci);
    return 0;
}