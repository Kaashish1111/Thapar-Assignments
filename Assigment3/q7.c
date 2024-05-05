// A library charges a fine for every book returned late. For the first 5 days the fine is 50
// paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return
// the book after 30 days your membership will be canceled. WAP to accept no. of days the
// member is late to return the book and display the fine or appropriate message
#include<stdio.h>
int main(){
    printf("Enter the day/days: ");
    int d;
    scanf("%d",&d);
    if (d<=5){
        printf("Fine is 50 paisa");
    }
    else if (d>=6 && d<=10){
        printf("Fine is ₹1");
    }
    else if(d>10 && d<=30){
        printf("Fine is ₹5");
    }
    else{
        printf("Membership cancelled");
    }
    return 0;
}