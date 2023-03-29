#include<stdio.h>
#include<math.h>
int main()
{
    int p,total;
    char c;

    printf("Enter No.P ");
    scanf("%d",&p);
    printf("Enter city");
    scanf("%c",&c);
    switch(c){
    case 'J':
        total=(1000*p);
        printf("Calculate the total fare=%d",total);
        break;
     case 'S':
        total=(1000*p);
        printf("Calculate the total fare=%d",total);
        break;
    }
return 0;
}


