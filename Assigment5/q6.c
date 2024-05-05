#include<stdio.h>
int main(){
    int a[50],size;
    int sum=0,avg;
    scanf("%d",&size);
    printf("Enter elemnts of array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    avg=sum/size;
    printf("%d\n",sum);
    printf("%d\n",avg);
    return 0;
}