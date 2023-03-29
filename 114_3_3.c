//This Program is Prepare by 22TCE114_MEET
#include<stdio.h>
int main()
{
    float a,b;
    printf("\tEnter a");
    scanf("%f",&a);
    printf("\tEnter b");
    scanf("%f",&b);
    printf("\n\tValue of a Before Swapping is %f",a);
    printf("\n\tValue of b Before Sawapping is %f",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n\tValue of a After Swapping is %f",a);
    printf("\n\tValue of b After Sawapping is %f",b);
    printf("\n\t\tID22TCE114_MEET");
    return 0;

}

