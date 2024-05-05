#include<stdio.h>
int main(){
    int a1[]={1,2,3,4,5};
    int size_a1=sizeof(a1)/sizeof(a1[0]);
    int a2[]={6,7,8,9,10};
    int size_a2=sizeof(a2)/sizeof(a2[0]);
    int a2[]={6,7,8,9,10};
    int merged_size=size_a1+size_a2;
    int merged_a[merged_size];

    for(int i=0;i<size_a1;i++){
        merged_a[i]=a1[i];
    }

     for(int i=0;i<size_a2;i++){
        merged_a[size_a1+i]=a2[i];
    }
    
    for(int i=0;i<merged_size,i++){
        printf("%d",merged_a);
    }
    return 0;
}