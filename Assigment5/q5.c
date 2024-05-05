#include<stdio.h>
int main(){
    int a[50];
    int size,search;
    printf("Enter  the sie of array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("The array you entered is: ");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array: \n");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter the elemnt you wnat to serach for: ");
    scanf("%d",&search);
    int first=0;
    int last=size-1;
    int middle;
    middle=(first+last)/2;
    while(first<=last){
        if(a[middle]<search){
            first=middle+1;
        }
        else if(a[middle]==search){
            printf("%d is found at %d postion",search,middle+1);
            break;
        }
        else{
            last=middle-1;
        }
        middle=(first+last)/2;
        if(first>last){
           printf("%d is not found in array",search);
        }
    }
    return 0;
}