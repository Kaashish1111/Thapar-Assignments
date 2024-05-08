// 5. To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
// (ii) ternary operator
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even\n");
    }
    else{
        printf("odd\n");
    }
    if(n>0)
    {
        printf("Postive\n");
    }
    else if(n==0){
        printf("Neither postive nor negative\n");
    }
    else{
        printf("Negative");
    }
    return 0;
}