#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%g %g",&a, &b);
    printf("Sum: %g\n", (a+b));
    printf("Difference: %g\n", (a-b));
    printf("Product: %g\n", (a*b));
    printf("Quotient: %g\n", (a/b));
    return 0;
}