#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","r");
    fclose(fp);
    return 0;
}