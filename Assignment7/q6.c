#include<stdio.h>
struct complex
{
    /* data */
    int real,img;
};
struct complex sum(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real+c2.img;
    c3.img=c1.img+c2.img;
    return c3;
}
int main(){
    struct complex c[2];
    for(int i=0;i<2;i++){
        printf("Enter the real part of %d complex number: ",i+1);
        scanf("%d",&c[i].real);
        printf("Enter the imaginery part of %d complex number: ",i+1);
        scanf("%d",&c[i].img);
    }
    c[2]=sum(c[0],c[1]);
    printf("The sum of the complex number is %d+%di",c[2].real,c[2].img);
    return 0;
}