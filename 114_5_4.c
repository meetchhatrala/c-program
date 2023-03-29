//This program is prepare by 22TCE114_MEET
#include<stdio.h>
int main()
{
    int Order,Stock;
    char Credit;
    Credit='n',Credit='y';
    printf("\nEnter Credit=");
    scanf("%c",&Credit);
    if(Credit=='n'||Credit=='N')
    {
        printf("Order cannot be accepted");
    }
    else if(Credit!='y'&&Credit!='Y')
    {
        printf("Enter Correct Credit");
    }
    else
    {
        if(Credit=='y'||Credit=='Y')
        {
            printf("Enter Order=");
            scanf("%d",&Order);
            printf("Enter Stock=");
            scanf("%d",&Stock);
        }
        if(Stock>=Order)
        {
            printf("Your Order will place");
        }
        else if(Credit=='y'||Credit=='Y'&&Stock<=Order)
        {
            printf("\nOut of Stock");
        }
        printf("\n\n22TCE114_MEET");
    }
    return 0;}

