//This program is prepare by 22TCE114_MEET
#include<stdio.h>
int main()
{
    int Price,Total=0,i;
    printf("Enter amount of your product");
    printf("\nif you enter no more product then press'0'\n");
    for(i=1; ; i++)
    {
        printf("Enter Price");
        scanf("%d",&Price);
        if(Price==0)
        {
            break;
        }
        else
        {
            Total+=Price;
        }
    }
    printf("Total Amount=%drs.",Total);
    printf("\n22TCE114_MEET");

    return 0;
}
