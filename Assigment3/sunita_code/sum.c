#include<stdio.h>
int main(){
    int size;
    printf("Enter size: \n");
    scanf("%d",&size);
    int a[size],a_2[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elemts of another array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a_2[i]);
    }
    int c[size];
    for(int i=0;i<size;i++){
        c[i]=a[i]+a_2[i];
    }
    for(int i=0;i<size;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}