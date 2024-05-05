#include<stdio.h>
int main()
{
    int cp,sp;
    printf("the cost price: ");
    printf("\nthe selling price: ");
    scanf("%d%d",&cp,&sp);
    if(cp>sp){
        printf("you are in loss");
    }
    if(cp==sp){
        printf("fuck off");
    }
    else{
        printf("you are in profit");
    }
    return 0;
}