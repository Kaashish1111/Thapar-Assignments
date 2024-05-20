#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("story.txt", "r");
    if(fp==NULL){
        printf("File not found");
    }
    int count=0;
    while (!feof(fp)){
        ch=fgetc(fp);
        if(ch=='\n'){
            count++;
        }
    }
    printf("No of lines are: %d",count);
    return 0;
}