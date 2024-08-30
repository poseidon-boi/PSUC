#include <stdio.h>
#include <math.h>
int main()
{
    float P, N, R, SI, CI;
    printf("Enter P, N and R: ");
    scanf("%f %f %f", &P, &R, &N);
    SI = P*N*R / 100;
    CI = P * pow((1 + R/100), N) - P;
    printf("SI = %g\n", SI);
    printf("CI = %g\n", CI);
    return 0;
}
