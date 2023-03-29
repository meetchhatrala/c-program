//this program is prepare by MEET_22CE019
#include<stdio.h>
#include<string.h>

void palin(char str[],int i)
{
    int len = strlen(str)-(i+1);
    if (str[i] == str[len])
    {
        if((i+1) == len || i == len)
        {
            printf("The entered string is a palindrome \n");
            return 0;
        }
        palin(str, i+1);
    }
    else
        {
        printf("The entered string is not palindrome\n");
      }
}
int main()
{
    char strl[20];
    printf("Enter a string : ");
    scanf("%s",strl);
    palin(strl,0);
    printf("\n 22CE019_MEET");
    return 0;
}
