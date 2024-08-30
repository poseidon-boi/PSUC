#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int length);
void selection_sort(int arr[], int length);
void binary_search(int arr[], int length, int element_to_search);

int main()
{
    // Inputting the array and choice
    int length, i, search;
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter the elements of the array: ");
    for(i=0; i<length; i++)
        scanf("%d", &arr[i]);
    char choice;
    printf("Enter 's' for selection sort and 'b' for bubble sort: ");
    scanf(" %c", &choice);

    // Sorting depending on case
    switch(choice)
    {
        case 's':
            selection_sort(arr, length);
            break;
        case 'b':
            bubble_sort(arr, length);
            break;
        default:
            printf("Invalid input");
            break;
    }

    // Printing the sorted array
    printf("The sorted array is: ");
    for(i=0; i<length; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Inputting the search element
    printf("Enter the search element: ");
    scanf("%d", &search);
    
    // Calling binary search function
    binary_search(arr, length, search);
}

// Bubble sort function(ascending)
void bubble_sort(int arr[], int length)
{
    int temp, i, j;
    for(i=0; i<length; i++)
    {
        for(j=1; j < length-i; j++)
        {
            if(arr[j] >= arr[j-1])
                continue;
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
}

// Selection sort function(ascending)
void selection_sort(int arr[], int length)
{
    int min, position_of_min, i, j, temp;
    for(i=0; i<length-1; i++)
    {
        min = arr[i];
        position_of_min = i;
        for(j=i+1; j<length; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                position_of_min = j;
            }
        }
        arr[position_of_min] = arr[i];
        arr[i] = min;
    }
}

// Binary search function
void binary_search(int arr[], int length, int element_to_search)
{
    int first=0, last = length-1, mid = first+(last-first)/2;
    while(first!=last)
    {
        if(arr[mid] == element_to_search)
        {
            printf("%d found at position %d", element_to_search, (mid+1));
            exit(0);
        }
        if(element_to_search < arr[mid])
            last = mid;
        if(element_to_search > arr[mid])
            first = mid;
        mid = first+(last-first)/2;
    }
    printf("%d not found", element_to_search);
}