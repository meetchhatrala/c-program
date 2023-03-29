#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1 = fopen("Data1.txt", "r");
    FILE *fp2 = fopen("Data2.txt", "r");
    FILE *fp3 = fopen("Data3.txt", "w");
    char c;
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);
    printf("Merged Data1.txt and Data2.txt into Data3.txt");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nI'd:- 22DCS038  ||  Name : Raiyani Prince.");
    return 0;
}


