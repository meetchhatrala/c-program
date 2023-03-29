//This Program is prepare by 22CE019_MEET
#include<stdio.h>
int main()
{
    int M=21/* Match-Sticks*/,P/*USER*/,C/*COMPUTER*/;
    while(1)
    {
        printf("\nTotal match-stick %d",M);
        printf("\npick up match-stick by User");
        scanf("%d",&P);
        if(P<1 || P>5)
        {
            continue;
        }
        C=5-P;
        printf("\npick up match-stick by Computer %d",C);
        M=M-5;
        if(M==1)
        {
            printf("\nSorry you are lose the match");
            break;
        }
    }
    printf("\n\n 22CE019_MEET");
    return 0;
}

