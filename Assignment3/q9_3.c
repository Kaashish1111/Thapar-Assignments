// WAP using loop (for, while, do-while):
// X raised to power n
#include<stdio.h>
int main(){
    int base,exponent,value=1;
    printf("Enter a number: ");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exponent);
    for(int i=1;i<=exponent;i++){
        value=value*base;
    }
    printf("%d is answer",value);
    return 0;
}