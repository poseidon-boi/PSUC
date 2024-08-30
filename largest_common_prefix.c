#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j;
    char* prefix = strs[0];
    for(i=1; i<strsSize; i++)
    {
        for(j=0; prefix[j] != '\0'; j++)
        {
            if(strs[i][j] != prefix[j])
            {
                prefix[j] = '\0';
                break;
            }
        }
    }
    return prefix;
}