#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, columns, i, j;

    // Inputting the matrix
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of the matrix:\n");
    int arr[rows][columns], rowsum[rows], columnsum[columns];
    for (i=0; i<rows; i++)
        for(j=0; j<columns; j++)
            scanf("%d", &arr[i][j]);
    
    // Computing row sum matrix
    for(i=0; i<rows; i++)
    {
        rowsum[i] = 0;
        for(j=0; j<columns; j++)
            rowsum[i] += arr[i][j];
    }

    // Computing column sum matrix
    for(i=0; i<columns; i++)
    {
        columnsum[i] = 0;
        for(j=0; j<rows; j++)
            columnsum[i] += arr[j][i];
    }

    // Printing output
    printf("The row sum matrix is:\n");
    for(i=0; i<rows; i++)
        printf("%d\n", rowsum[i]);
    printf("The column sum matrix is:\n");
    for(i=0; i<columns; i++)
        printf("%d ", columnsum[i]);
    return 0;
}