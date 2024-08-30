#include <stdio.h>

int factorial(int num)
{
    if(num<0)
        return 0;
    if(num==0)
        return 1;
    return num * factorial(num-1);
}



int main()
{
    
    // int a=5, b=10, c=15, d=0, result;
    /*
    int x, y, z, w;
    x = (c == a+b || c ==d);
    y = !(b<=12) && a%2 == 0;
    z = (a=0) && c==15;
    w = c<<2;
    printf("%d %d %d %d\n\n\n", x, y, z, w);
    int m = 10 * (2 - 3) / 2 % (5 + 7) + 8 *6 / 12;
    printf("%d \n\n\n", m);
    int i,j,k;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
                printf("*");
            if(j==1) break;
        }
    }
    printf("\n\n\n");
    i=1024;
    for(;i;i >>= 1)
        printf("Assignment");
    */


    // int *point = &a, n, fact;
    // n = *point;
    // printf("\n\n\n");
    // a = 5, b = 5, c = 10;
    // fact = factorial(n);
    // printf("%d\n", fact);
    // printf("%x\n", point);
    // printf("%d\n", point);
    // printf("%d", n);


    // printf("\n\n\n");


    // result = (a==b) && (c>b);
    // if(result)
    // {
    //     if(c>a) printf("C is greater than A\n");
        
    // }
    int a = 5%3, b = 3%5;
    printf("%d %d", a, b);
    return 0;
}