#include <stdio.h>
#include <stdlib.h>

/*
    Converts any integer from 2^63-1 to -(2^63-1) to binary, octal, and hexadecimal
    Can convert -(2^63) to binary
*/

void convert_number_in_reverse(long long temp, short converted_number[], short *length_of_converted, short system);
void convert_to_hexadecimal_reverse(long long temp, char hexadecimal_number[], short *length_of_hexadecimal);
void convert_negative_to_binary_reverse(long long temp1, short converted_number[], short *length_of_converted);

int main()
{
    // Inputting the number
    long long number;
    short binary_number[64], octal_number[22], i=0, length_of_binary, length_of_octal, length_of_hexadecimal;
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
    if(number < 0)
        convert_negative_to_binary_reverse(number, binary_number, &length_of_binary);
    else
        convert_number_in_reverse(number, binary_number, &length_of_binary, 2);

    // Converting to octal(gives number in reverse)
    if(number < 0)
        convert_number_in_reverse((-number), octal_number, &length_of_octal, 8);
    else
        convert_number_in_reverse(number, octal_number, &length_of_octal, 8);

    // Converting to hexadecimal(gives number in reverse)
    if(number < 0)
        convert_to_hexadecimal_reverse((-number), hexadecimal_number, &length_of_hexadecimal);
    else
        convert_to_hexadecimal_reverse(number, hexadecimal_number, &length_of_hexadecimal);

    // Printing the binary number
    printf("The binary is ");
    for(i = length_of_binary-1; i>=0; i--)
    {
        printf("%d", binary_number[i]);
        if(i%8 == 0)    // Makes output look neater
            printf(" ");
    }

    // Printing the octal number
    printf("\nThe octal is ");
    if(number < 0)
        printf("-");
    for(i = length_of_octal-1; i>=0; i--)
        printf("%d", octal_number[i]);

    // Printing the hexadecimal number
    printf("\nThe hexadecimal is ");
    if(number < 0)
        printf("-");
    for(i = length_of_hexadecimal-1; i>=0; i--)
    {
        if(hexadecimal_number[i] < 10)
            printf("%d", hexadecimal_number[i]);
        else
            printf("%c", hexadecimal_number[i]);
    }
    return 0;
}

// Function to convert number to any system with 2-9 symbols in reverse
void convert_number_in_reverse(long long temp, short converted_number[], short *length_of_converted, short system)
{
    short i, digit;
    for(i=0; temp > 0; i++)
    {
        digit = temp % system;
        converted_number[i] = digit;
        temp /= system;
    }
    *length_of_converted = i;
}

// Function to convert number to hexadecimal in reverse
void convert_to_hexadecimal_reverse(long long temp, char hexadecimal_number[], short *length_of_hexadecimal)
{
    short i, digit;
    for(i=0; temp > 0; i++)
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
    *length_of_hexadecimal = i;
}

/*
    Function to convert negative number to binary(converts to binary, and then converts to 2's complement)
    Returns numbers in their 64 bit representations
    Works upto -2^63
*/
void convert_negative_to_binary_reverse(long long temp1, short converted_number[], short *length_of_converted)
{
    short i, digit, carry=1;
    unsigned long long temp = -temp1;
    // Setting whole number as 0
    for(i=0; i<64; i++)
        converted_number[i] = 0;

    for(i=0; temp > 0; i++)
    {
        digit = temp % 2;
        converted_number[i] = digit;
        temp /= 2;
    }
    *length_of_converted = i;

    // Converting to 1's complement
    for(i=0; i<64; i++)
    {
        if(converted_number[i] == 0)
            converted_number[i] = 1;
        else
            converted_number[i] = 0;
    }

    // Adding 1 to convert to 2's complement
    for(i=0; i<=*length_of_converted; i++)
    {
        digit = (converted_number[i] + carry) % 2;
        carry = (converted_number[i] + carry) / 2;
        converted_number[i] = digit;
    }
    *length_of_converted = 64;
}