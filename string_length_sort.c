#include<stdio.h>
#include<string.h>

int strlen2(char str[]);

int main()
{
    // Inputs the strings
    char str[30][30], temp[30], tempchar;
    int i, j, k, n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    while((getchar()) != '\n');
    printf("\nEnter the strings:\n");
    for(i=0;i<n;i++)
        fgets(str[i], 30, stdin);

    // Sorts them in ascending order of lengths using bubble sort
    for(i=0;i<n;i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(strlen2(str[j-1]) > strlen2(str[j]))
            {
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    // Sorts each individual string alphabet wise using bubble sort
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen2(str[i]); j++)
        {
            for(k=1; k<strlen2(str[i])-j; k++)
            {
                if(str[i][k-1]>str[i][k])
                {
                    tempchar = str[i][k-1];
                    str[i][k-1] = str[i][k];
                    str[i][k] = tempchar;
                }
            }
        }
    }

    // Displays the output
    printf("\nOutput:\n");
    for(i=0;i<n;i++)
        printf("%s", str[i]);
    return 0;
}

int strlen2(char str[])
{
    int i;
    for(i=0; str[i]!='\n'; i++);
    return i;
}