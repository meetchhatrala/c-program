//This program prepare by 22CE019_MEET
#include<stdio.h>
int main()
{
    int arr[5],i,size;
    int Positive_No=0,Negative_No=0,Even_No=0,Odd_No=0,Zero=0;

    for(i=0; i<5; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]>0)
        {
            Positive_No++;
        }
        else if(arr[i]<0)
        {
            Negative_No++;
        }
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]%2==0&&arr[i]!=0)
        {
            Even_No++;
        }
        else if(arr[i]%2!=0)
        {
            Odd_No++;
        }
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]==0)
        {
            Zero++;
        }
    }
    printf("\n Positive No=%d",Positive_No);
    printf("\n Negative No=%d", Negative_No);
    printf("\n Even No=%d",Even_No);
    printf("\n Odd No=%d",Odd_No);
    printf("\n Zero=%d",Zero);
    printf("\n\n22CE019_MEET");
    return 0;
}
