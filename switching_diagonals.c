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

    // Switching the diagonal elements
    for (i=0; i<n; i++)
    {
        temp = arr[i][i];
        arr[i][i] = arr[i][n-i-1];
        arr[i][n-i-1] = temp;
    }

    // Printing the new matrix
    printf("The matrix after switching primary and secondary diagonals is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}