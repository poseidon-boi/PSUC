/* 
    An ambitious program to solve n simultaneous linear equations in n variables by converting to row echelon form
    This program only works for systems with unique solutions
    Depending on the order in which the equations are entered, the program may return slightly inaccurate solutions
    (of the order of 10^-15), because it uses double values
*/
#include <stdio.h>
#include <stdlib.h>

void convert_to_row_echelon(double** arr, int rows, int columns);
void print_matrix(double** arr, int rows, int columns);

int main()
{
    // Inputting the number of variables
    int no_of_variables, i, j;
    printf("Enter the number of variables: ");
    scanf("%d", &no_of_variables);

    // Creating the dynamically allocated array and the solution array
    double solution[no_of_variables], **arr;
    arr = malloc(no_of_variables * sizeof *arr);
    for(i=0; i<no_of_variables; i++)
        arr[i] = malloc((no_of_variables+1) * sizeof *arr[i]);

    // Exits if memory fails to allocate
    if(arr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    // Inputting the matrix
    printf("Enter the elements of the matrix:\n");
    for(i=0; i < no_of_variables; i++)
        for(j=0; j < no_of_variables+1; j++)
            scanf("%lf", &arr[i][j]);
    
    // Converting to row echelon form
    convert_to_row_echelon(arr, no_of_variables, no_of_variables+1);

    // Printing the matrix in row echelon form
    printf("The converted matrix is:\n");
    print_matrix(arr, no_of_variables, no_of_variables+1);

    // Solving the equations
    for(i=no_of_variables-1; i>=0; i--)
    {
        solution[i] = arr[i][no_of_variables];
        for(j=i+1; j<no_of_variables; j++)
            solution[i] -= arr[i][j] * solution[j];
        solution[i] /= arr[i][i];
    }

    // Printing the solution
    printf("The solutions are: ");
    for(i=0; i<no_of_variables; i++)
        printf("%lf ", solution[i]);

    // Deallocating the array
    for(i=0; i<no_of_variables; i++)
    {
        free(arr[i]);
    }
    free(arr);
}

void convert_to_row_echelon(double** arr, int rows, int columns)
{
    int i, j, k, temp;
    double quotient;
    for(i=0; i<columns-1; i++)  // i here is used to iterate to a new pivot element
    {
        for(j=i+1; j<rows; j++)  // j is used to make all of the elements under the pivot element 0
        {
            if(arr[i][i] == 0)  // If the pivot element is 0, the rows are switched
            {
                for(k=i; k<columns; k++)
                {
                    temp = arr[i][k];
                    arr[i][k] = arr[j][k];
                    arr[j][k] = temp;
                }
                continue;
            }
            quotient = arr[j][i] / arr[i][i];
            for(k=i; k<columns; k++)  // k is used to iterate over all the elements of that row to perform the operation
                arr[j][k] -= arr[i][k] * quotient;
        }
    }
}

// Prints the matrix (function created as practice to understand how pointer arrays work)
void print_matrix(double** arr, int rows, int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
            printf("%lf\t", arr[i][j]);
        printf("\n");
    }
}