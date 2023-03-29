// This program is prepared by 22CE019_MEET
#include<stdio.h>
union library
{
    int accession_no;
    char title[20];
    char author[20];
    float price;
}a1,a2;
int main()
{
    int flag;
    printf("\nEnter Accession Number of book : ");
    scanf("%d",&a1.accession_no);
    printf("\nAccession Number of book : %d",a1.accession_no);

    printf("\nEnter  title of book : ");
    scanf("%s",&a1.title);
    printf("\nTitle of book%s",a1.title);

    printf("\nEnter author name : ");
    scanf("%s",&a1.author);
    printf("\nAuthor name : %s",a1.author);

    printf("\nEnter price : ");
    scanf("%f",&a1.price);
    printf("\nBook price : %f",a1.price);

    printf("\nEnter flag : ");
    scanf("%d",&flag);
    printf("\nflag : %d\n",flag);

    if(flag==1)
    {
        printf("book issued");
    }
    else if (flag==0)
    {
        printf("book is not issued");
    }
printf("\n\n22CE019_MEET");
return 0;
}
