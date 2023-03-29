//this program is prepare by MEET_22CE019
#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n;
    char str[100][100],s[100];
    printf("Enter number of name");
    scanf("%d",&n);
    printf("Enter names in any order\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
        }
        }
    }
    printf("The sorted order of name are:\n");
     for(j=0;j<n;j++)
    {
        printf("%s\n",str[j]);
    }
    printf("\n22CE019_MEET");
    return 0;
}
