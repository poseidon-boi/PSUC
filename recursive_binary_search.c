#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[], int element_to_search, int length, int first, int last);

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
    binary_search(arr, search, length_of_array, 0, length_of_array-1);
    return 0;
}

// Performs binary search using recursion
void binary_search(int arr[], int element_to_search, int length, int first, int last)
{
    if(first >= last)
    {
        printf("Element not found");
        exit(0);
    }
    int mid = first+(last-first)/2;
    if(arr[mid] == element_to_search)
    {
        printf("Element found at position %d", (mid+1));
        exit(0);
    }
    if(element_to_search < arr[mid])
        binary_search(arr, element_to_search, length, first, mid-1);
    if(element_to_search > arr[mid])
        binary_search(arr, element_to_search, length, mid+1, last);
}