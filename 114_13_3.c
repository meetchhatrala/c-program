#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num, i, *ptr, sum = 0;
    printf("Enter number of elements:");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("enter elements of array:\n");
    for (i = 0; i < num; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("average = %d", sum / num);
    free(ptr);
    printf("\nI'd:-22CE019_MEET");
    return 0;
}

