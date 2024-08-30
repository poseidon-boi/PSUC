#include <stdio.h>
int main()
{
    // Inputting the number
    int i, bin_no=0, reversed_bin_no=0, num, digit, temp, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Converting the number to binary
    temp = num;
    while (temp>0)
    {
        digit = temp % 2;
        bin_no = bin_no + digit*place;
        temp /= 2;
        place *= 10;
    }

    // Making a reverse of the binary number
    temp = bin_no;
    while (temp>0)
    {
        digit = temp % 10;
        reversed_bin_no = reversed_bin_no * 10 + digit;
        temp /= 10;
    }

    // Checking whether the binary number is a palindrome
    if(bin_no == reversed_bin_no)
        printf("The binary %d is a palindrome", bin_no);
    else
        printf("The binary %d is not a palindrome", bin_no);
    return 0;
}