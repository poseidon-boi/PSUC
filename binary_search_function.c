#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[], int element_to_search, int length);

int main()
{
    // Inputting the sorted array
    int length_of_array, i, search;
    printf("Enter length of the sorted array: ");
    scanf("%d", &length_of_array);
    int arr[length_of_array];
    printf("Enter the elements: ");
    for(i=0; i<length_of_array; i++)
        scanf("%d", &arr[i]);

    // Inputting the element to be searched
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Calling the binary search function
    binary_search(arr, search, length_of_array);
    return 0;
}

// Performs binary search
void binary_search(int arr[], int element_to_search, int length)
{
    int lowest=0, highest=length-1, mid=highest/2;
    while(lowest != highest)
    {
        if(arr[mid] == element_to_search)
        {
            printf("Element found at position %d", (mid+1));
            exit(0);
        }
        if(arr[mid] < element_to_search)
            lowest = mid+1;
        if(arr[mid] > element_to_search)
            highest = mid-1;
        mid = (lowest + highest)/2;
    }
    printf("Element not found");
}