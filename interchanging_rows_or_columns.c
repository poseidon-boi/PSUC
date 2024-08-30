#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, columns, i, j, isColumn = 0, switch1, switch2, temp;

    // Inputting the matrix
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("Enter the elements of the matrix:\n");
    int arr[rows][columns];
    for (i=0; i<rows; i++)
        for(j=0; j<columns; j++)
            scanf("%d", &arr[i][j]);

    // Asking whether to switch rows or columns
    printf("Enter 1 to switch columns(rows by default): ");
    scanf("%d", &isColumn);
    
    if(isColumn == 1)
    {
        // Switching columns
        printf("Enter column numbers to switch: ");
        scanf("%d %d", &switch1, &switch2);
        if(switch1>columns || switch2>columns)
        {
            printf("Bruh.");
            exit(0);
        }
        switch1--;
        switch2--;
        for(i=0; i<rows; i++)
        {
            temp = arr[i][switch1];
            arr[i][switch1] = arr[i][switch2];
            arr[i][switch2] = temp;
        }
    }
    else
    {
        // Switching rows
        printf("Enter row numbers to switch: ");
        scanf("%d %d", &switch1, &switch2);
        if(switch1>rows || switch2>rows)
        {
            printf("Bruh.");
            exit(0);
        }
        switch1--;
        switch2--;
        for(i=0; i<columns; i++)
        {
            temp = arr[switch1][i];
            arr[switch1][i] = arr[switch2][i];
            arr[switch2][i] = temp;
        }
    }

    // Printing the new matrix
    printf("The matrix after switching is:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}