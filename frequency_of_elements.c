#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Inputting the array
    int i, j, len, current_no_of_unique=0, found;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len], unique[len], frequency[len];
    printf("Enter the elements of the array: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);

    // Finding the number of unique elements
    for(i=0; i<len; i++)
    {
        found = 0;

        // Increases frequency if the current element is in the matrix of unique elements
        for(j=0; j<current_no_of_unique; j++)
        {
            if(unique[j] == arr[i])
            {
                frequency[j]++;
                found = 1;
                break;
            }
        }

        // Adds the element to the matrix of unique elements if it is unique
        if(found == 0)
        {
            unique[current_no_of_unique] = arr[i];
            frequency[current_no_of_unique] = 1;
            current_no_of_unique++;
        }
    }

    // Displays the output
    printf("Element : Frequency\n");
    for(i=0; i<current_no_of_unique; i++)
        printf("%d : %d\n", unique[i], frequency[i]);
}