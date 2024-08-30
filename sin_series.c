#include <stdio.h>
#include <math.h>
int main()
{
    // Inputting n and x
    int n, i, fact = 1;
    float x, series=0;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    // Computing the sin Taylor series upto n terms
    for (i = 1; i <= n; i++)
    {
        fact *= i;
        if(i%2 == 0)
            continue;
        if((i/2)%2 == 0)
            series += pow(x, i)/fact;
        else
            series -= pow(x, i)/fact;
    }

    // Displaying the output
    printf("sin(%f) = %f", x, series);
    return 0;
}