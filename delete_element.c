#include <stdio.h>
#include <stdlib.h>
int main()
{
    int length, i, isDeleted=0, deleted_element;
    printf("Enter the number of elements: ");
    scanf("%d", &length);
    printf("Enter the elements: ");
    int arr[length];
    for (i=0; i<length; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be deleted: ");
    scanf("%d", &deleted_element);
    for(i=0; i<length; i++)
    {
        if(arr[i] == deleted_element)
        {
            arr[i] = arr[i+1];
            isDeleted = 1;
            continue;
        }
        if(isDeleted == 1)
            arr[i] = arr[i+1];
    }
    if(isDeleted == 0)
    {
        printf("Element not found\n");
        exit(0);
    }
    printf("The new array is: ");
    for (i=0; i<length-1; i++)
        printf("%d ", arr[i]);
    return 0;
}