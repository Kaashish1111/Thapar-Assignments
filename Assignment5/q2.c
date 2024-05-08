// To insert an element at a given location of an array
#include<stdio.h>
int main(){
    int a[100],pos,value,size;
    printf("Enter the no of elemnts you want in an array to store: ");
    scanf("%d",&size);
    printf("Enter the elemnts of array: \n");
    for(int i=0;i<size;i++){
        printf("Enter %d elemnt: \n",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n printing the orignal array ");
    for(int i=0;i<size;i++){
        printf("%d,",a[i]);
    }
    printf("\nEnter the position where your want to insert the element and then the value of elemnt: ");
    scanf("%d%d",&pos,&value);
    for(int i=size-1;i>=pos-1;i--){
        a[i + 1] = a[i];
    }
    a[pos - 1] = value; // Insert the new element at the desired position
    size++; // Increase the size of the array

     
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}