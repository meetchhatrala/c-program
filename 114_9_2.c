//This program is prepare by 22CE019_MEET
#include<stdio.h>
#include<math.h>
double calculateS(double,double,double);
void area();
int main()
{
    area();
    printf("\n22CE019_MEET");
}
void area()
{
    double a,b,c,s,area;
    printf("Enter the side value of triangle  ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b<=c||b+c<=a||a+c<=b)
    {
        printf("triangle is not valid");
    }else
    {
        s=calculateS(a,b,c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %lf",area);
    }

}
double calculateS(double a ,double b ,double c )
{
    double s;
    s=a+b+c/2;
    return s;
}
