#include<stdio.h>
#include<ctype.h>
int main(){
    char user_input;
    
    printf("Enter a character: ");
    scanf("%c", &user_input);
    
    // if (isupper(user_input))
    //     printf("The entered character '%c' is a Capital Letter.\n", user_input);
    // else if (islower(user_input))
    //     printf("The entered character '%c' is a Small Letter.\n", user_input);
    // else if (isdigit(user_input))
    //     printf("The entered character '%c' is a Digit.\n", user_input);
    // else
    //     printf("The entered character '%c' is a Special Symbol.\n", user_input);

    if(user_input>='A'&& user_input<='Z')
    {
        printf("The entered character '%c' is a Capital Letter.\n", user_input);
    }
    else if(user_input >='a' && user_input<='z'){
        printf("The entered character '%c' is a small Letter.\n",user_input);
    }
    else if(user_input>=0 && user_input<=9)
    {
        printf("The entered character '%c' is a digit.\n", user_input);
    }
    else{
        printf("The entered character '%c' is a special charcter.\n", user_input);
    }
    return 0;
}
