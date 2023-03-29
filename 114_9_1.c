//no argument pass and no return value
//This program is prepare by 22CE019_MEET
#include<stdio.h>
void isprime();
int main()
{
    isprime();
    return 0;
}
void isprime()
{
    int n,flag=1,i;
    printf("enter number");
    scanf("%d",&n);
    if(n==1)
    {
        printf("not prime and not composit");
        return ;
    }
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("composit");
    }
    else
    {
        printf("prime");
    }
    printf("\n22CE019_MEET");
    return 0;
}
