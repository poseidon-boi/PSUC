#include <stdio.h>
#include <stdlib.h>

void FIB(int n, int i, long long previous_fibonacci_number, long long current_fibonacci_number);

int main()
{
    // Inputting the length of the series
    int N, i=1;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Calling the fibonacci series printing function
    FIB(N, i, 0, 1);
    return 0;
}

// Prints fibonacci numbers from 1st to nth position using tail recursion
void FIB(int n, int i, long long previous_fibonacci_number, long long current_fibonacci_number)
{
    if(i==1)
        printf("0 ");
    else if(i==2)
        printf("1 ");
    else
    {
        long long temp = current_fibonacci_number;
        current_fibonacci_number += previous_fibonacci_number;
        previous_fibonacci_number = temp;
        printf("%lld ", current_fibonacci_number);
    }
    i++;
    if(i<=n)
        FIB(n, i, previous_fibonacci_number, current_fibonacci_number);
}