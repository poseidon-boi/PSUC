#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Inputting the string
    char str[100];
    int i, length_of_string;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')   // Replaces ending newline character with a null character
            str[i] = '\0';
        if(str[i] >= 'A' && str[i] <= 'Z')  // Converts the string to lowercase
            str[i] += 32;
    }
    length_of_string = i-2;

    // Compares corresponding elements to check whether the string is a palindome
    for(i=0; i<length_of_string/2; i++)
    {
        if(str[i] != str[length_of_string-i])
        {
            printf("The string is not a palindrome");
            exit(0);
        }
    }
    printf("The string is a palindome");
    return 0;
}