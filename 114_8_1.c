//This program is prepared by 22CE019_MEET
#include<stdio.h>
#include<string.h>
 int main()
{
    char pass[20];
    int dig=0,upper=0,lower=0,special=0,i=0;
    do
    {
        printf("Enter password : ");
        scanf("%s",pass);
    }while(strlen(pass)<8);
    for(i=0;pass[i]!='\0';i++)
    {
        if(isupper(pass[i]))
        {
            upper=1;
        }
         if(islower(pass[i]))
        {
            lower=1;
        }
        if(isdigit(pass[i]))
        {
            dig=1;
        }
        if(ispunct(pass[i]))
        {
            special=1;
        }
    }
    if(upper==1 && lower==1 && dig==1 && special==1)
    {
        printf("Strong");
    }
    else if((upper==1&&lower==1&&dig==1&&special==0)||
            (upper==1&&lower==1&&dig==0&&special==1)||
            (upper==1&&lower==0&&dig==1&&special==1)||
            (upper==0&&lower==1&&dig==1&&special==1))
    {
        printf("Average");
    }
    else
    {
        printf("poor password");
    }

printf("\n22CE019_MEET");
    return 0;
}
