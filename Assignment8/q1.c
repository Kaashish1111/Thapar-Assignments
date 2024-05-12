#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("story.txt","r");
    fclose(fp);
    return 0;
}