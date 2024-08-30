#include <stdio.h>
int isPalindrome(int number)
{
    int digit, reversed_number=0, temp = number;
    while (temp>0)
    {
        digit = temp % 10;
        reversed_number = reversed_number * 10 + digit;
        temp /= 10;
    }
    if(reversed_number == number)
        return 1;
    else
        return 0;
}
int main()
{
    int p, q, i, temp;
    printf("Enter p and q: ");
    scanf("%d %d", &p, &q);
    if(p>q)
    {
        temp = p;
        p = q;
        q = temp;
    }
    printf("The palindrome numbers are: ");
    for(i=p; i<=q; i++)
    {
        if(isPalindrome(i))
            printf("%d ", i);
    }
    return 0;
}