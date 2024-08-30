#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");

    // Inputting the first element and setting max and min equal to it
    scanf("%d", &arr[0]);
    int max = arr[0], min = arr[0];

    // Comparing max and min with subequent elements
    for(i=1; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    // Printing max and min
    printf("The min is %d and max is %d", min, max);
    return 0;
}