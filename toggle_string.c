#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i=0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)  // Changing lowercase to uppercase
            str[i] -= 32;
        else if(str[i] >= 65 && str[i] <= 90)   // Changing uppercase to lowercase
            str[i] += 32;
        i++;
    }
    printf("The new string is: %s", str);
    return 0;
}