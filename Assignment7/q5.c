#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    int marks;
};
struct student s;
int main(){
    struct  student *ptr=&s;
    printf("Enter the rollno:");
    scanf("%d",&ptr->rollno);
    printf("\nThe roll no is %d",ptr->rollno);
    printf("\nEnter the name:");
    scanf("%s",ptr->name);
    printf("\nThe name is %s",(*ptr).name);
}