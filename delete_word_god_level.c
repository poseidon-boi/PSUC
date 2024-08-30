#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[30][30], word[30];
    int i, no_of_words;
    printf("Enter a string: ");
    for(i=0; i<30; i++)
    {
        scanf("%29s", &str[i]);
        if(getchar()=='\n')
            break;
    }
    no_of_words = i+1;
    printf("Enter the word to be deleted: ");
    scanf("%29s", &word);
    for(i=0; i<no_of_words; i++)
    {
        if(strcmp(str[i], word))
            printf("%s ", str[i]);
    }
    return 0;
}

// Version with the bug fixed
/*
int main()
{
    char str[30][30], word[30], ch;
    int i, j, no_of_words;
    printf("Enter a string: ");
    ch = getchar();
    for(i=0; i<30; i++)
    {
        for(j=0; j<30; j++)
        {
            if(ch == ' ' || ch == '\n' || ch == '\0')
            {
                str[i][j] = '\0';
                break;
            }
            str[i][j] = ch;
            ch = getchar();
        }
        if(ch == '\0' || ch == '\n')
            break;
        while(ch == ' ')
            ch = getchar();
        if(ch == '\0' || ch == '\n')
            break; 
    }
    no_of_words = i+1;
    printf("Enter the word to be deleted: ");
    scanf(" %s", &word);
    for(i=0; i<no_of_words; i++)
    {
        if(strcmp(str[i], word))
            printf("%s ", str[i]);
    }
    return 0;
}
*/