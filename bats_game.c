#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test_cases, bags, i, j;

    // Inputting the matrix
    printf("Enter the number of test cases: ");
    scanf("%d", &test_cases);
    if(test_cases > 1000)
        exit(0);
    int arr[test_cases][100], yes_no[test_cases], odd_sum, even_sum;
    for(i=0; i<test_cases; i++)
    {
        odd_sum = 0;
        even_sum = 0;
        printf("Enter number of bags for case %d: ", (i+1));
        scanf("%d", &bags);
        if(bags>100)
            exit(0);
        printf("Enter number of bats: ");
        for(j=0; j < bags; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > 100)
                exit(0);
            if(arr[i][j] % 2 == 0)
                even_sum += arr[i][j];
            else
                odd_sum += arr[i][j];
        }
        if(even_sum > odd_sum)
            yes_no[i] = 1;
        else
            yes_no[i] = 0;
    }
    for(i=0; i<test_cases; i++)
    {
        if(yes_no[i] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}