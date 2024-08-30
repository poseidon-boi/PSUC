/*
#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[100];
    int no_of_words = 1, i, length_of_sentence;
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    for(i=0; sentence[i]!='\0'; i++);
    length_of_sentence = i-1;
    i = 1;
    while(sentence[i] != '\0')
    {
        if(sentence[i] != ' ' && sentence[i-1] == ' ')
            no_of_words++;
        i++;
    }
    if(sentence[length_of_sentence-1] == ' ')
        no_of_words--;
    if(sentence[0] == ' ')
        no_of_words--;
    
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100], word[20];
    int i, j, ls = 0, lw = 0, temp, chk = 0;
    printf("Enter the sentence: ");
    fgets(sentence, 100, stdin);
    printf("Enter a word: ");
    fgets(word, 20, stdin);
    while(sentence[ls]!= '\0')
    {
        if(sentence[ls] == '\n')
        {
            sentence[ls] = '\0';
            break;
        }
        ls++;
    }
    while(word[lw]!= '\0')
    {
        if(word[ls] == '\n')
        {
            word[ls] = '\0';
            break;
        }
        lw++;
    }
    for (i = 0; i <= ls - lw; i++) {
        chk = 1;
        for (j = 0; j < lw; j++) {
            if (sentence[i + j] != word[j]) {
                chk = 0;
                break;
            }
        }
        if (chk) {
            for (j = i; j < ls - lw; j++) {
                sentence[j] = sentence[j + lw + 1];
            }
            ls -= lw;
            i--;
        }
    }
    sentence[ls] = '\0'; 
    printf("New Sentence = %s", sentence);
    return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[20];
    int i, j, ls = 0, lw = 0, temp, chk = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("Enter a word: ");
    fgets(word, 20, stdin);
    while(str[ls]!= '\0' && str[ls] != '\n')
        ls++;
    while(word[lw]!= '\0' && word[lw] != '\n')
        lw++;
    for (i = 0; i <= ls - lw; i++) {
        chk = 1;
        for (j = 0; j < lw; j++) {
            if (str[i + j] != word[j])
            {
                chk = 0;
                break;
            }
        }
        if (chk) 
        {
            for (j = i; j < ls - lw; j++) 
                str[j] = str[j + lw + 1];
            ls -= lw;
            i--;
        }
    }
    str[ls] = '\0'; 
    printf("New String = %s", str);
    return 0;
}