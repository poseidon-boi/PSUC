#include<stdio.h>
#include<string.h>

int main()
{
    // Inputs the names
    char str[30][30],temp[30];
    int i,j,n;
    printf("Enter the number of names: ");
    scanf("%d",&n);
    printf("Enter the names: ");
    for(i=0;i<n;i++)
        scanf("%s",str[i]);

    // Sorts them using bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(strcmp(str[j-1],str[j])>0)
            {
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    // Displays the output
    printf("New order is: ");
    
    for(i=0;i<n;i++)
        printf("%s ",str[i]);

    return 0;
}