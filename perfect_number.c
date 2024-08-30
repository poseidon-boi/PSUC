#include <stdio.h>
int main()
{
    // Inputting the number
    int number, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Getting the sum of factors and checking whether the number is a perfect number
    for(i=1; i<= number/2; i++)
    {
        if(number%i == 0)
            sum +=i;
    }
    if(sum==number)
        printf("%d is a Perfect number", number);
    else
        printf("%d is not a Perfect number", number);
    return 0;
}