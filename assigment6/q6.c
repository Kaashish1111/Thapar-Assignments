#include<stdio.h>
int pass_an_array(int arr[],int size){
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n, a[100];
    pass_an_array(a,n);
    return 0;
}