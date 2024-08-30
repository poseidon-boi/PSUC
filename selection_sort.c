#include <stdio.h>
int main()
{
    // Inputting the array
    int n, i, j, temp, min, min_position;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // Sorting using selection sort
    for(i=0; i<n; i++)
    {
        min = arr[i];
        min_position = i;
        for(j=i; j<n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                min_position = j;
            }
        }
        arr[min_position] = arr[i];
        arr[i] = min;
    }

    // Displaying the sorted array
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}