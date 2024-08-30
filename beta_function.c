#include <stdio.h>
#include <stdlib.h>
long long factorial(int num)
{
    if(num==0)
        return 1;
    int i;
    long long fact=1;
    for(i=1; i<=num; i++)
        fact *= i;
    return fact;
}

int main()
{
    int num1, num2;
    long long fact1, fact2, fact3;
    long double beta;
    printf("Enter arguments of the beta function: ");
    scanf("%d %d", &num1, &num2);
    if(num1 < 1 || num2 < 1)
    {
        printf("BURN IN HELL YOU UNBELIEVER!!");
        exit(0);
    }
    fact1 = factorial(num1-1);
    fact2 = factorial(num2-1);
    fact3 = factorial(num1+num2-1);
    printf("%lld %lld %lld\n", fact1, fact2, fact3);
    beta = fact1*((fact2*1.0)/fact3);
    printf("The value of the beta function is: %Lf", beta);
    return 0;
}