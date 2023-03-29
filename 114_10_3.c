#include<stdio.h>
struct employee
{
    char name[50];
    int age;
    struct detail
    {
        char address[50];
        int salary;
    } d;
} e;
int main()
{
    printf("Enter Name Of Employee : ");
    scanf("%s",&e.name);
    gets(e.name);
    printf("Enter Age Of Employee : ");
    scanf("%d",&e.age);
    printf("Enter Address Of Employee : ");
    scanf("%s",&e.d.address);
    gets(e.d.address);
    printf("Enter Salary Of Employee : ");
    scanf("%d",&e.d.salary);
    printf("\n\n");
    printf("Name Of Employee Is : %s\n",e.name);
    printf("Age Of Employee Is : %d\n",e.age);
    printf("Address Of Employee Is : %s\n",e.d.address);
    printf("Salary Of Employee Is : %d\n",e.d.salary);
    printf("\nID-22CE019_MEET");
    return 0;
}
