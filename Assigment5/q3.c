#include<stdio.h>
int main(){
    int a[100],size,pos;
    printf("Enter the no of elemnts you wnat: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter %dth element: \n",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the postion that you want to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<=size-1;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("\nArray after deletion: ");
    for(int i=0;i<size;i++){
        printf("%d,",a[i]);
    }
    return 0;
}