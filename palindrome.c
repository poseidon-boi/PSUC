#include <stdio.h>

int reverse_number(int temp);

int main()
{
    // Inputting the number
    int number, reversed_number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Getting the reversed number and comparing to check whether it is a palindrome
    reversed_number = reverse_number(number);
    if (reversed_number == number)
        printf("%d is a palindrome", number);
    else
        printf("%d is not a palindrome", number);
}

// Reverses the number
int reverse_number(int temp)
{
    int digit, reversed_number=0;
    while (temp>0)
    {
        digit = temp % 10;
        reversed_number = reversed_number * 10 + digit;
        temp /= 10;
    }
    return reversed_number;
}