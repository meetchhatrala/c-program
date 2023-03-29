//This Program is Prepare by 22TCE114_MEET
#include<stdio.h>
int main()
{
    int Height;
    printf("Enter Your Height");
    scanf("%d",& Height);
    if(Height<150)
    {
        printf("Your  Height is Dwarf");
    }
    else if(Height>=150&&Height<165)
    {
        printf("Your Height is Average Height");
    }

    else if(Height>=165&&Height<=195)
    {
        printf("Your  Height is Tall");

    }
    else
    {
        printf("Your  Height is Abnormal Height");
    }
    printf("\n\nID22TCE114_MEET");

    return 0;
}
