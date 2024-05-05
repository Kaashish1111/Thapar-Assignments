#include<stdio.h>
int main(){
    char  x;
    printf("enter the char.  ");
    scanf("%c",&x);
    if ( x>=97 && x<=122)
    {
        printf( "capital case");
        }
        else if ( x>=65 && x<=90){ 
            printf("lower case");
        }
        else { 
            printf("special");
        }
    return 0;
}