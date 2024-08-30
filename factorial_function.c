#include <stdio.h>
#include <stdlib.h>
long double factorial(int num)
{
    if(num==0)
        return 1;
    long double fact=1, i;
    for(i=1; i<=num; i++)
        fact *= i;
    return fact;
}

int main()
{
    int num;
    long double fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("BURN IN HELL YOU UNBELIEVER!!");
        exit(0);
    }
    fact = factorial(num);
    printf("The factorial is: %Lf", fact);
    return 0;
}