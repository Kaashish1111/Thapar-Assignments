#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("stroy.txt","r");
    if(fp==NULL){
        printf("File doesn't exist");
    }
    int count=0;
    while (!feof(fp))
    {
        /* code */
        ch=fgetc(fp);
        if(ch>=0 && ch<=255){
            count++;
        }
    }
    printf("No of characters are: %d",count);
    return 0;
}