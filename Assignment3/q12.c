#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter 20 integers: ");
    for(int i=0;i<20;i++){
        scanf("%d",&n);
        if(n%2==0){
            count++;
        }
    }
    printf("The no of even integrs entred out of 20 is:%d",count);
    return 0;
}