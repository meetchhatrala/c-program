//This program prepare by 22TCE114_MEET
#include<stdio.h>
#define colmax 7
#define rowmax 10
int main()
{
    int row,col;
    printf("MULTIPLICATION TABLE(1 TO 7)\n");
    row=1;
    do
    {
        col=1;
        do
        {
            printf("\t%d",row*col);
            col++;
        }
        while(colmax>=col);
        printf("\n");
        row++;
    }
    while(row<=rowmax);
    printf("\n22TCE114_MEET");
    return 0;
}
