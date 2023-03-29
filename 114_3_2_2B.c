//This program is prepare by 22TCE114_MEET
#include<stdio.h>
int main()
{
    int YELLOW=10,PINK=20,Calculate;
    printf("\nCount before execution YELLOW%d  PINK%d",YELLOW,PINK);
    Calculate=++YELLOW + YELLOW++ + --YELLOW + ++PINK - --PINK - --PINK;
    printf("\nCount after execution  YELLOW%d  PINK%d",YELLOW,PINK);
    printf("\nCalculate %d ",Calculate);
    printf("\n\n22TCE114_MEET");
    return 0;

}
