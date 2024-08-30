#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, j, trace=0;
    double norm=0;

    // Inputting the matrix
    printf("Enter the length of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    int arr[n][n];
    for (i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
            norm += arr[i][j] * arr[i][j];
        }

    // Computing trace and norm
    for (i=0; i<n; i++)
        trace += arr[i][i];
    norm = sqrt(norm);
    printf("The trace is %d and the norm is %f", trace, norm);

    return 0;
}