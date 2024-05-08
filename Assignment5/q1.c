// Reverse of array 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); // this is for printing elemts of array
    }
    // reverse of array
    printf("\n Printing reverse of given array ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}