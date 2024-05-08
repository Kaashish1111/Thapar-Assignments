#include <stdio.h> 
void Lcm(int a,int b){
    int max = (a > b) ? a : b; 
    // While loop to check if max variable is divisible by x and y   
    while (1) { 
        if (max % a == 0 && max % b == 0) { 
            printf("The LCM of %d and %d is %d.", a, b,max); 
            break; 
        } 
        max++; 
    }
    return ;
}
// Driver code 
int main() 
{ 
    int x , y , max; 
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    Lcm(x,y);
    return 0; 
}