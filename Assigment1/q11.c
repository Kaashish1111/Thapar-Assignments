// *WAP to calculate gross salary of a person, where
// // gross_salary=basic+da+ta and da is 10% of basic and ta is 12% of basic.
#include<stdio.h>
#include<math.h>
int main(){
    int basic;
    printf("Enter your Basic");
    scanf("%d",&basic);
    float da =(basic*10/100);
    float ta =(basic*12/100);
    float gross_salary=basic+da+ta;
    printf("%.2f",gross_salary);
    return 0;
}