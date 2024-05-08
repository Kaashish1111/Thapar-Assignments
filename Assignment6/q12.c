#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The string you entred is : %s\n", str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U')
        {
            count++;
        }
    }
    printf("The no of vowels in the string is: %d", count);
    return 0;
}