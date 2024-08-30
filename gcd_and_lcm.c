#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Inputting the numbers
    int num1, num2, dividend, divisor, remainder = 1, lcm;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    // GCD and LCM are the same as the numbers if they are equal
    if(num1 == num2)
    {
        printf("The gcd is %d and the lcm is %d", num1, num1);
        exit(0);
    }
    
    // Creates copies of the numbers to compute gcd and lcm using Euclidean algorithm
    dividend = num1;
    divisor = num2;
    while (remainder != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    lcm = num1 * num2 / dividend;

    // Prints the output
    printf("The gcd  is  %d and lcm is %d", dividend, lcm);
    return 0;
}