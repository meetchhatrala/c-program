//This program  is prepare by 22CE019_MEET
#include<stdio.h>
void binary(int);
int main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    binary(number);
    printf("\n22CE019_MEET");
    return 0;
}
void binary(int number)
{
    if(number==0)
    {
        return;
    }
    binary(number/2);
    printf("%d",number%2);


}
