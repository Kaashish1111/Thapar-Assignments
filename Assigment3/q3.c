#include<stdio.h>
int main(){
    char n;
    printf("Enter opertaion you wnat to perfom (+,-,*,/): ");
    scanf("%c",&n);
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    switch (n)
    {
        case '+':
         printf("%d\n",a+b);
        
        case '-':
         printf("%d\n",a-b);

        case '*':
         printf("%d\n",a*b);

        case '/':
         printf("%d\n",a/b);
        
    }
    return 0;
}