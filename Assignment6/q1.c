#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int *a=&x;
    printf("%p ",a);
    printf("%p\n",&x);

    float y;
    printf("Enter a number: ");
    scanf("%d",&y);
    float *b=&y;
    printf("%p ",b);
    printf("%p\n",&y);
    
    char z;
    printf("Enter a character: ");
    scanf("%d",&z);
    char *c=&z;
    printf("%p ",c);
    printf("%p\n",&z);
    return 0;
}