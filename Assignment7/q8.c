#include <stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
union demo_arry{
    int x;
    char y;
    float z;
};
int main()
{
    union abc u;
    u.a = 10;
    u.b = 'a';
    u.c=97.8;
    printf("%d\n", u.a);
    printf("%c\n", u.b);
    printf("%f\n", u.c);
    union demo_arry d[3];
    for(int i=0;i<3;i++){
        printf("Enter the interger value: \n");
        scanf("%d",&d[i].x);
        printf("Enter the character value: \n");
        scanf(" %c",&d[i].y);
        printf("Enter a float value: \n");
        scanf("%f",&d[i].z);
    }
    for(int j=0;j<3;j++){
        printf(" the interger value: \n");
        printf("%d",&d[j].x);
        printf("the character value: \n");
        printf("%c",&d[j].y);
        printf("The float value: \n");
        printf("%f",&d[j].z);
    }
    return 0;
}