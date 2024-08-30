#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inputting the length of the series
    int N, i, previous_fibonacci_number=0, current_fibonacci_number=1, temp;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Printing the fibonacci series
    /*
    for(i=1; i<=N; i++)
    {
        if(i==1)
            printf("%d ", previous_fibonacci_number);
        else if(i==2)
            printf("%d ", current_fibonacci_number);
        else
        {
            temp = current_fibonacci_number;
            current_fibonacci_number += previous_fibonacci_number;
            previous_fibonacci_number = temp;
            printf("%d ", current_fibonacci_number);
        }
    }
    */

    // A better solution
    current_fibonacci_number = 0;
    previous_fibonacci_number = 1;
    for(i=0; i<N; i++)
    {
        printf("%d ", current_fibonacci_number);
        current_fibonacci_number += previous_fibonacci_number;
        previous_fibonacci_number = current_fibonacci_number - previous_fibonacci_number;
    }
    return 0;
}