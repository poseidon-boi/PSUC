#include <stdio.h>
#include <stdlib.h>

void recursive_digit_sum(long long number, int current_sum);
int digit_sum(long long number);

int main()
{
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    int sum = digit_sum(num);
    printf("The sum of digits is %d\n", sum);
    recursive_digit_sum(num, 0);
    return 0;
}

int digit_sum(long long number)
{
    int digit, sum=0;
    while(number>0)
    {
        digit = number % 10;
        number /= 10;
        sum += digit;
    }
    return sum;
}

void recursive_digit_sum(long long number, int current_sum)
{
    int digit;
    if(number == 0)
    {
        printf("The sum of digits (using recursion) is %d", current_sum);
        exit(0);
    }
    digit = number % 10;
    number /= 10;
    current_sum += digit;
    recursive_digit_sum(number, current_sum);
}