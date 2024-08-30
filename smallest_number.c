#include <stdio.h>
int main()
{
    float a, b, c, min;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    min = (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("The smallest number is %g", min);
    return 0;
}