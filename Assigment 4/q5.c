#include<stdio.h>
void prime_or_not(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("The number is prime");
    }
    else{
        printf("The number is not a prime number");
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime_or_not(num);
    return 0;
}