#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the cofficents: ");
    scanf("%d%d%d",&a,&b,&c);
    int d= (b*b) - 4*a*c;
    float r1,r2;
    if(d>=0){
        r1=(-b+sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("%d %d",r1,r2);
    }
    else{
        printf("no roots exist");
    }

   return 0;
}