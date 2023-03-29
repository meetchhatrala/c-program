//This program is prepare by 22TCE114_MEET
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Enter Cofficent of Quadratic Equation");
    printf("\na=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    discriminant=(b*b)-(4*a*c);
    printf("discriminant=%f",discriminant);
    switch(discriminant>0)
    {
    case 1:
        printf("\nroot1=%f",(-b + sqrt(discriminant)) / (2*a));
        printf("\nroot2=%f",(-b + sqrt(discriminant)) / (2*a));
        break;
    case 0:
        switch(discriminant<=0)
        {
        case 1:
            printf("\nroot1 is %f",root1=-b/2*a);
            printf("\nroot2 is %f",root2=-b/2*a);
            break;
        case 0:
            printf("app galat ho");
        }
    }
    printf("\n22TCE114_MEET");
    return 0;}

