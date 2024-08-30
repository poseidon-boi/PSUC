#include <stdio.h>
#include <stdlib.h>

int min(int a, int b);
int max(int a, int b);

int main()
{
    // Inputting the number of test cases
    int test_cases, i, j;
    scanf("%d", &test_cases);
    if(test_cases > 10000 || test_cases < 1)
        exit(0);
    int arr[test_cases][4], tricks[test_cases];

    // Loop runs n times for n test cases
    for(i=0; i<test_cases; i++)
    {
        // Inputting the 4 integers for each test case
        int sum = 0, mood=0;
        for(j=0; j<4; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] < 0)
                exit(0);
            sum += arr[i][j];
        }

        if(sum == 0) // Exits if sum is 0
            exit(0);

        // Calculates the number of tricks that can be performed

        if(arr[i][0] == 0) // If there are no tricks of the first type, only one trick can be performed
        {
            tricks[i] = 1;
            continue;
        }
        else
        {
            tricks[i] = arr[i][0];  // At least as many tricks as the first integer can be performed
            mood = arr[i][0];
        }
        int minimum = min(arr[i][1], arr[i][2]);

        // With alternating tricks of type 2 and 3, tricks can be performed without penalty
        tricks[i] += 2*minimum;
        arr[i][1] -= minimum;
        arr[i][2] -= minimum;

        // The remaining tricks of type 2, 3 and 4 have penalties
        if(max(arr[i][1], arr[i][2]) > mood)
        {
            tricks[i] += mood+1;
            continue;
        }
        else
        {
            tricks[i] += max(arr[i][1], arr[i][2]);
            mood -= max(arr[i][1], arr[i][2]);
        }
        if(arr[i][3] > mood)
            tricks[i] += mood+1;
        else
            tricks[i] += arr[i][3];
    }

    // Prints the output
    for(i=0; i<test_cases; i++)
        printf("%d\n", tricks[i]);
    return 0;
}

// Function to calculate the minimum of two numbers
int min(int a, int b)
{
    if(a<b)
        return a;
    return b;
}

// Function to calculate the maximum of two numbers
int max(int a, int b)
{
    if(a>b)
        return a;
    return b;
}