#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inputting the matrix
    int rows, columns, i, j, k;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int original_matrix[rows][columns], output_matrix[rows][columns];
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d", &original_matrix[i][j]);
            output_matrix[i][j] = original_matrix[i][j];
        }
    }

    // Zeroing the output matrix
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            if(original_matrix[i][j] != 0)
                continue;
            for(k=0; k<rows; k++)
                output_matrix[k][j] = 0;
            for(k=0; k<columns; k++)
                output_matrix[i][k] = 0;
        }
    }

    // Printing the output matrix
    printf("The new matrix is:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            printf("%d ", output_matrix[i][j]);
        printf("\n");
    }
    return 0;
}