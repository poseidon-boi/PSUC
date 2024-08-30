#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows1, columns1, rows2, columns2, i, j, k;

    // Inputting the first matrix
    printf("Enter the number of rows and columns in the first matrix: ");
    scanf("%d %d", &rows1, &columns1);
    printf("Enter the elements of the first matrix:\n");
    int arr1[rows1][columns1];
    for (i=0; i<rows1; i++)
        for(j=0; j<columns1; j++)
            scanf("%d", &arr1[i][j]);

    // Inputting the second matrix
    printf("Enter the number of rows and columns in the second matrix: ");
    scanf("%d %d", &rows2, &columns2);
    printf("Enter the elements of the second matrix:\n");
    int arr2[rows2][columns2];

    // Exiting if the matrices cannot be multiplied because number of rows and columns do not meet requirements
    if(columns1 != rows2)
    {
        printf("The matrices cannot be multiplied");
        exit(0);
    }

    // Continuing to input the second matrix
    for (i=0; i<rows2; i++)
        for(j=0; j<columns2; j++)
            scanf("%d", &arr2[i][j]);

    // Multiplying the matrices
    int multiplied[rows1][columns2];
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<columns2; j++)
        {
            multiplied[i][j]=0;
            for(k=0; k<columns1; k++)
                multiplied[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    // Printing the multiplied matrix
    printf("The multiplied matrix is: \n");
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<columns2; j++)
            printf("%d\t", multiplied[i][j]);
        printf("\n");
    }
    return 0;
}