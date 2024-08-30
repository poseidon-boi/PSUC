#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, temp, primary_diagonal_sum=0, secondary_diagonal_sum=0, rowsum=0, columnsum=0;

    // Inputting the matrix
    printf("Enter the length of the square matrix: ");
    scanf("%d", &n);
    if(n < 3)
    {
        printf("Ain't big enough");
        exit(0);
    }
    printf("Enter the elements of the matrix:\n");
    int arr[n][n];
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }


    // Checking whether it is a magic square:

    // Computing sum of diagonals
    for(i=0; i<n; i++)
    {
        primary_diagonal_sum += arr[i][i];
        secondary_diagonal_sum += arr[i][n-i-1];
    }

    // Checking whether the sum of diagonals is equal
    if(primary_diagonal_sum != secondary_diagonal_sum)
    {
        printf("Not a magic square");
        exit(0);
    }

    // Checking whether the row and column sums are equal
    for(i=0; i<n; i++)
    {
        rowsum = 0;
        columnsum = 0;
        for(j=0; j<n; j++)
        {
            rowsum += arr[i][j];
            columnsum += arr[j][i];
        }
        if(primary_diagonal_sum != rowsum || primary_diagonal_sum != columnsum)
        {
            printf("Not a magic square");
            exit(0);
        }
    }
    
    // Checking whether the elements are unique
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<i*j; k++)
            {
                if(arr[i][j] == arr[(k/n)+1][k%n])
                {
                    printf("Bruh that's trivial");
                    exit(0);
                }
            }
        }
    }
    printf("It is a magic square");
    return 0;
}