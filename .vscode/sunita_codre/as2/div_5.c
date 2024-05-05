#include<stdio.h>
int main()
{
    int x;
    printf("the input is: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("yes it is divisible by 5");
    }
    else{
        printf("no it is not divisible by 5");
    }
    return 0;
}