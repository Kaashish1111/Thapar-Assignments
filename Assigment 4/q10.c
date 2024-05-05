#include<stdio.h>
int add(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n+add(n-1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ans=add(num);
    printf("%d ",ans);
    return 0;
}