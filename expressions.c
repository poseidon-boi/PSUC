#include <stdio.h>
int main()
{
    float a=30, b=10, c=5, d=15;
    printf("The value of:\n");
    printf("a = %g\tb = %g\tc = %g\td = %g\n", a, b, c, d);
    printf("(a+b)*c/d = %g\n", ((a+b)*c/d));
    printf("((a+b)*c)/d = %g\n", (((a+b)*c)/d));
    printf("a+(b*c)/d = %g\n", (a+(b*c)/d));
    printf("(a+b)*(c/d) = %g\n", ((a+b)*(c/d)));
    return 0;
}