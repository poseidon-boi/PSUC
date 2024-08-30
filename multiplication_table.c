#include <stdio.h>
int main()
{
    int rows, columns, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    for (i = 1; i <= rows; i++)
    {
        for(j=1; j <= columns; j++)
            printf("%d * %d = %d    ", i, j, i*j);
        printf("\n");
    }
    return 0;
}