#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array '1': ");
  scanf("%d",&n);
  int m;
   printf("Enter the size of another array: ");
   scanf("%d",&m);
  int a[n],b[m];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
  printf("Enter the elements of another array:\n");
  for(int i=0;i<m;i++){
   scanf("%d",&b[i]);
  }
  for(int i=0;i<m;i++){
    printf("%d\t",b[i]);}
    printf("\n");
  int c[m+n];
  for(int i=0;i<n;i++){
    c[i]=a[i];
  }
  for(int i=0;i<m;i++){
    c[n+i]=b[i];
  }
  for(int i=0;i<m+n;i++){
    printf("%d\t",c[i]);
  }
  return 0;
}