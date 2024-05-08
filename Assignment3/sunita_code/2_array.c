#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("enter value of n and m:");
    scanf("%d%d",&n,&m);
    int a[50],b[70];
    printf("enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("Another array: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}