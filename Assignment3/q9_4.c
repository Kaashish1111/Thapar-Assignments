// WAP using loop (for, while, do-while):
// Check if the input integer is an Armstrong number or not?
#include<stdio.h>
int main(){
    int num,rem,arm=0,orginal_num;
    printf("Enter a number: ");
    scanf("%d",&num);
    orginal_num=num;
    while(num>0){
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(orginal_num==arm){
        printf("Yes this an armstrong number");
    }
    else{
        printf("No this is not an armstrong number ");
    }
    return 0;
}