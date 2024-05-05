#include<stdio.h>
int main()
{
    int x;
    printf("the input is: ");
    scanf("%d",&x);
    if(x<0){
        printf("the absolute value is %d",x*(-1));
    }
    else{
        printf("the abs value is %d",x);
    }
    return 0;
}