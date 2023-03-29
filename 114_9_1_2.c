//Argument passed but no return value
//This program is prepare by 22CE019_MEET
#include<stdio.h>
void isprime(int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    isprime(n);
    printf("\n22CE019_MEET");
    return 0;
}
void isprime(int n)
{
    int flag=1,i;

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
    return 0;
    }
