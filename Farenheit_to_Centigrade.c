#include <stdio.h>
int main()
{
    float C, F;
    printf("Enter temperature in Farenheit: ");
    scanf("%g", &F);
    C = (5.0/9.0) * (F-32);
    printf("The temperature in Centigrade is %g\n", C);
    return 0;
}