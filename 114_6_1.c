//This program is prepare by 22TCE114_MEET
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int dig,i,up,low;
    char pass[20];
    do
    {
        dig=0,i=0;
        up=0,low=0,pass;
        printf("\nEnter Pasword=");
        scanf("%s",&pass[i]);
        for(i=0; i<=strlen(pass); i++)
        {
            if(islower(pass[i]))
            {
                low=1;
            }
            else if(isupper(pass[i]))
            {
                up=1;
            }
            else if(isdigit(pass[i]))
            {
                dig=1;
            }
        }
        if(low==1&&up==1&&dig==1)
        {
            printf("password is good");
        }
        else
        {
            printf("\ninvalid password");
        }
    }
    while(low==0||up==0||dig==0);
    printf("\n\n22TCE_MEET");
    return 0;
}
