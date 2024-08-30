#include <stdio.h>

// Numbers whose squares end with the number itself are called automorphic numbers
int main()
{
    for(int i=0; i<100000; i++)
    {
        if(i<10)
        {
            if((i*i) % 10 == i)
                printf("%d ", i);
        }
        else if(i<100)
        {
            if((i*i) % 100 == i)
                printf("%d ", i);
        }
        else if(i<1000)
        {
            if((i*i) % 1000 == i)
                printf("%d ", i);
        }
        else
        {
            if((i*i) % 10000 == i)
                printf("%d ", i);
        }
    }
}