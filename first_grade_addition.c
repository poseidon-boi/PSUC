#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, arr[3][4], columnsum[5], carry = 0;

    // Inputting the matrix
    printf("Enter the elements of the matrix:\n");
    for (i=0; i<3; i++)
        for(j=0; j<4; j++)
            scanf("%d", &arr[i][j]);

    // Performing addition
    for(i=3; i>=0; i--)
    {
        columnsum[i+1] = carry;
        for(j=0; j<3; j++)
            columnsum[i+1] += arr[j][i];
        carry = columnsum[i+1] / 10;
        columnsum[i+1] %= 10;
    }
    columnsum[0] = carry;

    // Printing output
    printf("The code word is:\n");
    for(i=0; i<5; i++)
        printf("%d ", columnsum[i]);
    return 0;
}