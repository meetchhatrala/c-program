// This program is prepared by 22CE019_MEET
#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
char name[20];
char author[20];
float price;
};
void display(struct bookdetail v[],int n);
void main()
{
struct bookdetail b[SIZE];
int num,i;
printf("Enter the Numbers of Books:");

scanf("%d",&num);
printf("\n");
for(i=0;i<num;i++)
{
printf("\tBook %d Detail\n",i+1);
printf("\nEnter the Book Name:\n");
fflush(stdin);
scanf("%s",b[i].name);
printf("Enter the Author of Book:\n");
fflush(stdin);
scanf("%s",b[i].author);
printf("Enter the Price of Book:\n");
fflush(stdin);
scanf("%f",&b[i].price);
}
display(b,num);
printf("\n\n22CE019_MEET");
}
void display(struct bookdetail v[],int n)
{
    int i,t=1;
for(i=0;i<n;i++,t++)
{
printf("\n");
printf("Book No.%d\n",t);
printf("\t\tBook %d Name is=%s \n",t,v[i].name);
printf("\t\tBook %d Author is=%s \n",t,v[i].author);
printf("\t\tBook %d Price is=%f \n",t,v[i].price);
printf("\n");
}
}
