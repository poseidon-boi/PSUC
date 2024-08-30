#include <stdio.h>
#include <stdlib.h>

int max(int *p, int n);

int main()
{
    // Inputting the array
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // Displaying the largest number in the array
    printf("The largest number is %d", max(arr,n));
    return 0;
}

// Finds the largest number in the array
int max(int *p, int n)
{
    int largest = *p, i;
    for(i=1; i<n; i++)
    {
        p++;
        if(largest < *p)
            largest = *p;
    }
    return largest;
}