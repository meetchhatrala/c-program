//This Programe is Prepare By 22TCE114_MEET
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float Length,Gravity,Time;
    printf("\tEnter Langth");
    scanf("%f",&Length);
    printf("\tEnter Gravity");
    scanf("%f",&Gravity);
    Time=2*PI*sqrt(Length/Gravity);
    printf("\n\tTime Calculate(seconds) is %.2f",Time);
    printf("\n\n\t ID 22TCE114");
    return 0;

}
