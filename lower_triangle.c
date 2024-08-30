#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, temp;

    // Inputting the matrix
    printf("Enter the length of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    int arr[n][n];
    for (i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    
    // Checking whether it's a lower triangular matrix
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i][j] != 0)
            {
                printf("Not a lower triangular matrix");
                exit(0);
            }
        }
    }
    printf("It is a lower triangular matrix");
    return 0;
}