//This Program is prepare by 22CE019_MEET
#include<stdio.h>
int main()
{
    int ans,a,b,i;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    // a=1;
    ans=1;
    i=1;
    do
    {
        ans=ans*a;
        i++;

    }
    while(b>=i);
    printf("%d",ans);
    printf("\n\n22CE019_MEET");
    return 0;
}

