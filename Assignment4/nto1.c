#include<stdio.h>
void back(int num){
    int ans;
    if(num==0){
        printf("%d ",0);
    }
    else if(num==1){
        printf("%d ",1);
    }
    else{
        printf("%d ",num);
        back(num-1);
        // printf("%d ",num);
        return ;
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    back(n);
    return 0;
}