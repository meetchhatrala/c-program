/*#include<stdio.h>
void display();
int main()
{
    void (*func_ptr)();
    func_ptr=display;
    printf("Address of functions display is %u\n",func_ptr);
    (*func_ptr)();
    return 0;
}
void display()
{
    puts("By helping others, we help overselves!!");

}*/
char *copy (char*,char *);
int main()
{
    char *str;
    char source[] = "Kindness";
    char target[10];
    str=copy(target,source);
    printf("%s\n",str);
    return 0;
}
char *copy(char *t,char *s)
{
    char * r;
    r = t;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    return(r);
}

