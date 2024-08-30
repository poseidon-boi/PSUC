#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inputting the word
    char str[100], temp;
    int i, j, length_of_word;
    printf("Enter a lowercase word: ");
    scanf(" %s", &str);

    // Finding the length of the word
    for(i=0; str[i]!='\0'; i++);
    length_of_word = i;
    
    // Sorting in ascending order using bubble sort
    for(i=0; i<length_of_word; i++)
    {
        for(j=1; j<length_of_word-i; j++)
        {
            if(str[j] >= str[j-1])
                continue;
            temp = str[j];
            str[j] = str[j-1];
            str[j-1] = temp;
        }
    }

    // Printing the resulting word
    printf("%s", str);
}