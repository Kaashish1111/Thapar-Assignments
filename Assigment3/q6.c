// To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 || n%8==0){
        if(n%5==0 && n%8==0){
            printf("The number is divisble by both 8 and 5\n");
        }
        else if (n%5==0 && n%8!=0) {
            printf("The number is divisble by 5 but not by 8\n");
        }
        else{
            printf("The number is divisble by 8 but not by 5\n");
        }
    }
    else{
        printf("The number is not divisble by 5 and 8\n");
    }
    return 0;
}