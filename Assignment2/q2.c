#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the values o f a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int d=(pow(b,2)-4*a*c);
    if(d>=0)
    {
        float root_1=(-1*b+sqrt(d))/(2*a);
        printf("%.2f",root_1);
        float root_2=(-1*b-sqrt(d))/(2*a);
        printf("%.2f",root_2);
    }
    return 0;
}