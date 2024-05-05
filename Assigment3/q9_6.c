// WAP using loop (for, while, do-while):
// Multiplication of a table
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d X %d =%d\n",a,i,a*i);
    }
    return 0;
}