#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, disc, real;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    real = -b / (2*a);
    if (disc == 0)
        printf("Root: %g", real);
    else if (disc >0)
        printf("Root 1: %g \nRoot 2: %g",(real + sqrt(disc) / (2*a)), (real - sqrt(disc) / (2*a)));
    else
        printf("Root 1: %g + %gi \nRoot 2: %g - %gi", real, (sqrt(-disc) / (2*a)), real,  sqrt(-disc) / (2*a));
    return 0;
}