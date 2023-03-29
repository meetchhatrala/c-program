//This program is prepared by 22TCE115_Bhavya
#include<stdio.h>
int main()
{
    float Basic_Salary,DA,HRA,MA,TA,PF,Allowances;
    float IT,Deduction,Gross_Salary,Net_Salary;
    clrscr();
    printf("Enter Basic salary ");
    scanf("%f",&Basic_Salary);
    DA=Basic_Salary*0.70;
    HRA=Basic_Salary*0.07;
    MA=Basic_Salary*0.02;
    TA=Basic_Salary*0.04;
    PF=Basic_Salary*0.12;
    IT=500;
    Allowances=DA+HRA+MA+TA;
    Deduction=PF+IT;
    Gross_Salary=Basic_Salary+Allowances;
    Net_Salary=Gross_Salary-Deduction;


    printf("\nDA OF Basic Salary = %f",DA);
    printf("\nHRA OF Basic Salary = %f",HRA);
    printf("\nMA OF Basic Salary = %f",MA);
    printf("\nTA OF Basic Salary = %f",TA);
    printf("\nPF OF Basic Salary = %f",PF);
    printf("\nGross Salary = %f",Gross_Salary);
    printf("\nNet Salary = %f",Net_Salary);
    printf("\n\n22TCE115_Bhavya");
    return 0;
    }
