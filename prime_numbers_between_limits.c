#include <stdio.h>
#include <math.h>
int main()
{
    // Inputting the limits
    int lower_limit, upper_limit, i, j, isPrime;
    printf("Enter limits: ");
    scanf("%d %d", &lower_limit, &upper_limit);

    // Printing prime numbers within the limits:
    for (i = lower_limit; i < upper_limit; i++)
    {
        
        // Checking whether the number is prime
        isPrime = 1;
        if (i == 1)
            isPrime = 0;
        for(j=2; j <= sqrt(i); j++)
        {
            if (i%j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        // Printing if the number is prime
        if (isPrime == 1)
            printf("%d ", i);
    }
    return 0;
}