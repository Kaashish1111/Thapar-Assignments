#include <stdio.h>
#include <math.h>

int main() {
    int p,r,t;
    printf("Enter principal,rate of intrest and time:  ");
    scanf("%d%d%d",&p,&r,&t);
    float si=(p*r*t)/100;
    printf("%f",si);
    return 0;
}
