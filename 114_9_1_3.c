//No arguments passed but a return value
#include<stdio.h>
int isprime();
int main()
{
    int d;
    d=isprime();
    if(d==0)
    {
        printf("it is composit");
    }
    else if(d==1)
    {
        printf("it is prime");
    }
    else if(d==2)
    {
        printf("it is not prime or not composit");
    }
    printf("\n22CE019_MEET");
    return 0;

}
int isprime()
{
    int n,flag=1,i;
    printf("enter number");
    scanf("%d",&n);

    if(n==1)
    {
        return 2 ;
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
    return flag;
}
