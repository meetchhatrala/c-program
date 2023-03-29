//This program is prepared by 22CE019_MEET
#include<stdio.h>
 int main()
{

    int a[3][3],b[3][3],c[3][3]={0},i,j,k;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            {
                printf("Enter the element A[%d][%d] ",i,j);
                scanf("%d",&a[i][j]);
            }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            {
                printf("Enter the element B[%d][%d] ",i,j);
                scanf("%d",&b[i][j]);
            }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=2;k++)
            {
                c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }
    printf("Multiplied matrix is: ");
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
printf("\n22CE019_MEET");
    return 0;
}
