#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inputting the numbers
    int num1, num2, i, sum1=1, sum2=1;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Finding sum of proper divisors for both numbers
    for(i=2; i<=num1/2; i++)
    {
        if(num1 % i == 0)
            sum1 += i;
    }
    for(i=2; i<=num2/2; i++)
    {
        if(num2 % i == 0)
            sum2 += i;
    }

    // Checking whether they are amicable and printing output
    if((num1 == sum2) && (num2 == sum1))
        printf("Amicable numbers");
    else
        printf("Not amicable numbers");
}