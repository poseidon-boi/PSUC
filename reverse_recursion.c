#include <stdio.h>
#include <stdlib.h>

int reverse(int num);

int main()
{
    // Inputting the number
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("BURN IN HELL YOU UNBELIEVER!!");
        exit(0);
    }
    rev = reverse(num);
    printf("The reverse is: %d", rev);
    return 0;
}
// Reverses the number
int reverse(int num)
{
    int digit = num%10;
    return digit*10 + reverse(num/10);
}