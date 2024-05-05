#include<stdio.h>
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("value of first is:%d and value of second is %d",x,y);
}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    swap(a,b);
    return 0;
}


// int swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return a,b;
// }
// int main(){
//     int x,y;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&x,&y);
//     swap(x,y);
//     printf("Value of first varibale is:%d ,and the value of second variable is %d",x,y);
// }