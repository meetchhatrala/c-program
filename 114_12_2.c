#include<stdio.h>
void main(){
 FILE *fp;
 int n;
 fp=fopen("12.2.txt","wb+");
 printf("enter the integer data");
 scanf("%d",&n);
 while(n!=0){
 putw(n,fp);
 scanf("%d",&n);
 }
 rewind(fp);
 printf("reading data from file\n");
 while((n=getw(fp))!=EOF) {
 printf("%d\n",n);
 } printf("\nI'd:-22CE019_MEET");
 fclose(fp);
}
