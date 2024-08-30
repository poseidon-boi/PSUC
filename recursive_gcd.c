#include <stdio.h>
#include <stdlib.h>

int GCD(int num1, int num2);

int main()
{
    // Inputting the numbers
    int num1, num2;
    printf("Enter 2 positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Displaying the output
    printf("The GCD is %d", GCD(num1, num2));
    return 0;
}

// Finding the GCD using the Euclidean algorithm
int GCD(int num1, int num2)
{
    if(num2!=0)
        return GCD(num2, num1%num2);
    else
        return num1;
}