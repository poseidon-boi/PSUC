#include <stdio.h>
#include <stdlib.h>

void func(float** array, int rows, int cols)
{
  int i, j;

  for (i=0; i<rows; i++)
  {
    for (j=0; j<cols; j++)
    {
      array[i][j] = (i+1.0)/(j+1.0);
    }
  }
}

int main()
{
  int rows, cols, i, j;
  float **x;

  /* obtain values for rows & cols */
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
  /* allocate the array */
  x = malloc(rows * sizeof *x);
  for (i=0; i<rows; i++)
  {
    x[i] = malloc(cols * sizeof *x[i]);
  }
    // Inputting elements
    printf("Enter the elements of the array:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%f", &x[i][j]);
    }
    // Printing the array
    printf("The array is:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            printf("%g ", x[i][j]);
        printf("\n");
    }

  /* use the array */
  func(x, rows, cols);

  // Print the array
  for(i=0; i<rows; i++)
  {
    for(j=0; j<cols; j++)
        printf("%g ", x[i][j]);
    printf("\n");
  }

  /* deallocate the array */
  for (i=0; i<rows; i++)
  {
    free(x[i]);
  }
  free(x);
}