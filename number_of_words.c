#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Inputting the sentence
    char sentence[100];
    int no_of_words = 1, i, length_of_sentence;
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    // Finding the length of the sentence
    for(i=0; sentence[i]!='\0'; i++);
    length_of_sentence = i-1;

    // Finding the number of words in the sentence
    i = 1;
    while(sentence[i] != '\0')
    {
        if(sentence[i] != ' ' && sentence[i-1] == ' ')
            no_of_words++;
        i++;
    }
    if(sentence[length_of_sentence-1] == ' ')  // Accounts for the sentence ending with spaces
        no_of_words--;
    if(sentence[0] == ' ')   // Accounts for the sentence starting with spaces
        no_of_words--;
    printf("The number of words is %d", no_of_words);
    return 0;
}