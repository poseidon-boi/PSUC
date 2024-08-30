#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int n, i, j;

    // Inputting the matrix
    printf("Enter the length of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    int arr[n][n];
    for (i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &arr[i][j]);

    // Checking whether the matrix is symmetric
    for (i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                printf("The matrix is not symmetric");
                exit(0);
            }
        }
    }
    printf("The matrix is symmetric");

    return 0;
}