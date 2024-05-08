#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n!=-999)
    {
        sum=sum+n;
        scanf("%d",&n);
    }
    printf("The sum of the numbers is:%d",sum);
    
    return 0;
}