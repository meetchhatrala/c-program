#include<stdio.h>
int main(){
 FILE *fp;
 char ch;
 int i,pos;

 fp = fopen("abc.txt", "r");
 if(fp==NULL)
    printf("File dose not exist");
 fseek(fp,0,SEEK_END);
 pos =ftell(fp);
 while(i<pos){
    i++;
    fseek(fp,-i,SEEK_END);
 }

 printf("\nI'd:- 22CE019_MEET");
 return 0;
}

