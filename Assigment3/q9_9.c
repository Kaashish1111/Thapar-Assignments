// WAP using loop (for, while, do-while):
//print fabboanci series
#include<stdio.h>
int main(){
    int n,first=0,second=1,next;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonaci series: ");
    for(int i=0;i<n;i++){
        printf("%d,",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}