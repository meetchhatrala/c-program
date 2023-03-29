#include<stdio.h>
#include<stdlib.h>
struct data
{
    char name[30],branch[10];
    int rn,age,class1;
};
int main()
{
    struct data *p;
    int n;
    printf("Enter Number Of Students : ");
    scanf("%d",&n);
    p=(struct data*)malloc(n*sizeof(struct data));
    if(p==NULL)
    {
        printf("Insufficient Memory, Exiting...\n");
        return 0;
    }
    for(int i=1; i<=n; i++)
    {
        printf("Enter Name Of Student %d : ",i);
        scanf("%s",&(p+i)->name);
        printf("Enter Roll Number Of Student %d : ",i);
        scanf("%d",&(p+i)->rn);
        printf("Enter Class Of Student %d : ",i);
        scanf("%d",&(p+i)->class1);
        printf("Enter Age Of Student %d : ",i);
        scanf("%d",&(p+i)->age);
        printf("Enter Branch Of Student %d : ",i);
        scanf("%s",&(p+i)->branch);
    }
    for(int i=1; i<=n; i++)
    {
        printf("Entered Details Are Of Student %d Was : \n\n\n",i);
        printf("Name :- %s\nRoll Number :- %d\nClass :- %d\nAge :- %d\nBranch :- %s \n",
               (p+i)->name,(p+i)->rn,(p+i)->class1,(p+i)->age,(p+i)->branch);
    }
    printf("\nI'd:-22CE019_MEET");
}
