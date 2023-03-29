#include<stdio.h>
int main(){
    int marks[10],a=0,b=0,c=0,d=0;
    int *ptr;
    ptr=&marks;
    int i=1;
    for(ptr=&marks;ptr<&marks[10];ptr++){
        printf("Enter Marks Of Student %d : ",i);
        i++;
        scanf("%d",ptr);
        if(*ptr>=70)
            a++;
        if(*ptr<70&&*ptr>=60)
            b++;
        if(*ptr<60&&*ptr>=40)
            c++;
        if(*ptr<40)
            d++;
    }
    printf("DISTINCTION = %d\n",a);
    printf("FIRST CLASS = %d\n",b);
    printf("PASS = %d\n",c);
    printf("FAIL = %d\n",d);
    printf("\nId-22CE019_MEET.");
}

