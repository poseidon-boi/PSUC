#include <stdio.h>
int main()
{
    // Inputting the array
    int n, i, j, descending=0, temp;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // Sorting the array using bubble sort
    printf("Enter 1 to sort in descending order, (ascending by default): ");
    scanf("%d", &descending);

    for(i=1; i<n; i++)  // Ascending order
    {
        if(descending == 1)
            break;
        for(j=1; j<=n-i; j++)
        {
            if(arr[j-1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for(i=1; i<n; i++)  // Descending order
    {
        if(descending != 1)
            break;
        for(j=1; j<=n-i; j++)
        {
            if(arr[j-1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}