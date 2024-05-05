#include<stdio.h>
#include<math.h>
int main(){
   int x,n_root;
   printf("Enter a number: ");
   scanf("%d%d",&x,&n_root);
   float root;
   root=pow(x,1.0/n_root);
   printf("%f",root);
    return 0;
}