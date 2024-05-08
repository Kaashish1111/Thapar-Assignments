#include<stdio.h>
int main(){
    int arr[50],size,data,found=0;
    printf("Enter the number of elemnts you wnat to insert: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter the %dth element: \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemnt you wnat to search: ");
    scanf("%d",&data);
    for(int i=0;i<size;i++){
        if(arr[i]==data){
            found=1;
            printf("Element is  at %dth position",i);
            break;
        }
    }
    if(found==0){
        printf("data not in list");
    }
    return 0;
}