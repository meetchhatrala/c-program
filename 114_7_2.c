//this program is prepare by 22CE019_MEET
#include<stdio.h>
int main()
{
    int arr1[15],arr2[15],i=0,n=0,j,m=0,arr3[30],k=0,x=0;
    printf("Enter size of arr1");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=",i);
        scanf("%d",&arr1[i]);

    }
    printf("Enter size of arr2");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        printf("arr1[%d]=",j);
        scanf("%d",&arr2[j]);
    }

    for(k=0,i=0;k<n,i<n;k++,i++)

    {
      arr3[k]=arr1[i];
    }
    for(k=n,j=0;k<n+m,j<m;k++,j++)
    {
        arr3[k]=arr2[j];
    }
    for(k=0;k<n+m;k++)
    {
        printf("\narr3[%d]=%d",k,arr3[k]);
    }
    printf("\n22CE019_MEET");
    return 0;
}
