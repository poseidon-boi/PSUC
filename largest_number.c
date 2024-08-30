#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b)
    {
        if (a>c)
            printf("%g\n", a);
        else
            printf("%g\n", c);
    }
    else
    {
        if (b>c)
            printf("%g\n", b);
        else
            printf("%g\n", c);
    }
    return 0;
}