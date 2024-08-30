#include <stdio.h>
int main()
{
    // Inputting the number
    int number, digit, temp, sum;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking whether the number is an Armstrong number
    temp = number;
    while (temp>0)
    {
        digit = temp % 10;
        sum += digit*digit*digit;
        temp /= 10;
    }
    if (sum == number)
        printf("%d is an Armstrong number", number);
    else
        printf("%d is not an Armstrong number", number);
    return 0;
}