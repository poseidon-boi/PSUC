#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Inputting the number
    int number, digit, temp, sum, isDescending=0, previous_digit, current_digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Numbers less than 120 cannot be hill numbers
    if(number < 120)
    {
        printf("Not a hill number");
        exit(0);
    }
    temp = number;  // Using a copy of the number for checking
    
    // Gets first two digits
    previous_digit = temp % 10;
    temp /= 10;
    current_digit = temp % 10;
    temp /= 10;

    // Checks whether the number is a hill number:

    // Hill numbers have to start by ascending
    if(previous_digit >= current_digit)
    {
        printf("Not a hill number");
        exit(0);
    }
    
    while (temp>0)
    {
        previous_digit = current_digit;
        current_digit = temp % 10;

        // Consecutive digits cannot be the same
        if(current_digit == previous_digit)
        {
            printf("Not a hill number");
            exit(0);
        }

        // If the number is descending, it cannot ascend again
        if(isDescending)
        {
            if(current_digit > previous_digit)
            {
                printf("Not a hill number");
                exit(0);
            }
        }

        // Checks whether the number is descending
        else
        {
            if(current_digit < previous_digit)
                isDescending = 1;
        }
        temp /= 10;
    }

    printf("%d is a hill number", number);
    return 0;
}