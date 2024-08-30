#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=n-i-1; j>0; j--)
            printf(" ");
        for(j=0; j<=i; j++)
            printf("* ");
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
            printf(" ");
        for(j=n-i; j>0; j--)
            printf("* ");
        printf("\n");
    }
}