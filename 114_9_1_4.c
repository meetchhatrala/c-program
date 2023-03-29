// arguments passed with return value
//This program is prepare by 22CE019_MEET
#include<stdio.h>
int isprime(int);
int main()
{
    int d,n;
      printf("enter number");
    scanf("%d",&n);
    d=isprime(n);
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
int isprime(int n)
{
    int flag=1,i;

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

