#include <stdio.h>
#include<math.h>
int main(){
    int p,r,t,n;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("Enter Rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&n);
    float ci;
    ci=p*pow((1+r/n),n*t);
    printf("Compound intrest is:%f",ci);
    return 0;
}