#include <stdio.h>
int main()
{
    int length, i, position, inserted_element;
    printf("Enter the number of elements: ");
    scanf("%d", &length);
    printf("Enter the elements: ");
    int arr[length+1];
    for (i=0; i<length; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be inserted and position: ");
    scanf("%d %d", &inserted_element, &position);
    for(i=length; i>=position-1; i--)
    {
        if(i == position-1)
            arr[i] = inserted_element;
        else
            arr[i] = arr[i-1];
    }
    printf("The new array is: ");
    for (i=0; i<=length; i++)
        printf("%d ", arr[i]);
    return 0;
}