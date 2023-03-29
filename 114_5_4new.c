#include<stdio.h>
int main()
{
    int Order,Stock;
    char Credit;
    printf("\nEnter Credit=");
    scanf("%c",&Credit);
        if(Credit=='n'||Credit=='N')
    {
        printf("Order cannot be accepted");
    }else if(Credit!='y'||Credit!='Y')
{
    printf("Enter Correct Credit");
}else {
    printf("Enter Order");
        scanf("%d",&Order);
        printf("Enter Stock");
        scanf("%d",&Stock);

}if(Credit=='y'||Credit=='Y' &&Order<=Stock)
{
    printf("Your order will place");
}else if(Stock<Order)
{
    printf("Now Your order is out of stock ");
}



return 0;
}
