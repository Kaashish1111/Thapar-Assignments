#include<stdio.h>
int main(){
    int n,rem,reverse=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
        sum=sum+rem;
    }
    printf("The reverse of given number is %d and sum is %d",reverse,sum);
    return 0;
}