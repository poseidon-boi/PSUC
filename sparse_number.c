#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, previous_digit, current_digit, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    previous_digit = num % 2;
    num /= 2;
    while(num>0)
    {
        current_digit = num % 2;
        if(current_digit == 1 && previous_digit == 1)
        {
            printf("Not a sparse number");
            exit(0);
        }
        num /= 2;
        previous_digit = current_digit;
    }
    printf("Sparse number");
}