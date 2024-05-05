#include<stdio.h>
int main(){
    int a,b;
    printf("Emter two numbers:");
    scanf("%d%d",&a,&b);
    int c;
    c=a>b?a:b;
    printf("%d",c);   
    return 0;
}