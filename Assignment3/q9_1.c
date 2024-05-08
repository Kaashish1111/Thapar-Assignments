// WAP using loop (for, while, do-while):
// *Factorial of number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int Factorial=1;
    for(int i=1;i<=n;i++){
        Factorial=Factorial*i;
        // printf("%d\n",Factorial);
    }
    printf("%d",Factorial);
    return 0;
}