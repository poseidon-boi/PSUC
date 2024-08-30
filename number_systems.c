#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inputting the number
    long long number, temp;
    short binary_number[64], octal_number[22], digit, i=0, length_of_binary, length_of_octal, length_of_hexadecimal;
    char hexadecimal_number[16];
    printf("Enter a number: ");
    scanf("%lld", &number);

    // If the entered number is 0
    if(number == 0)
    {
        printf("The binary is 0\nThe octal is 0\nThe hexadecimal is 0");
        exit(0);
    }
    // Converting to binary(gives number in reverse)
    for(i=0, temp=number; temp > 0; i++)
    {
        digit = temp % 2;
        binary_number[i] = digit;
        temp /= 2;
    }
    length_of_binary = i;

    // Converting to octal(gives number in reverse)
    for(i=0, temp=number; temp > 0; i++)
    {
        digit = temp % 8;
        octal_number[i] = digit;
        temp /= 8;
    }
    length_of_octal = i;

    // Converting to hexadecimal(gives number in reverse)
    for(i=0, temp=number; temp > 0; i++)
    {
        digit = temp % 16;
        if(digit < 10)
            hexadecimal_number[i] = digit;
        else if(digit == 10)
            hexadecimal_number[i] = 'a';
        else if(digit == 11)
            hexadecimal_number[i] = 'b';
        else if(digit == 12)
            hexadecimal_number[i] = 'c';
        else if(digit == 13)
            hexadecimal_number[i] = 'd';
        else if(digit == 14)
            hexadecimal_number[i] = 'e';
        else
            hexadecimal_number[i] = 'f';
        temp /= 16;
    }
    length_of_hexadecimal = i;

    // Printing the binary number
    printf("The binary is ");
    for(i = length_of_binary-1; i>=0; i--)
        printf("%d", binary_number[i]);

    // Printing the octal number
    printf("\nThe octal is ");
    for(i = length_of_octal-1; i>=0; i--)
        printf("%d", octal_number[i]);

    // Printing the hexadecimal number
    printf("\nThe hexadecimal is ");
    for(i = length_of_hexadecimal-1; i>=0; i--)
    {
        if(hexadecimal_number[i] < 10)
            printf("%d", hexadecimal_number[i]);
        else
            printf("%c", hexadecimal_number[i]);
    }
    return 0;
}
