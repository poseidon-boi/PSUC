#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, temp;
    returnSize = malloc(2 * sizeof *returnSize);
    for(i=0; i<numsSize; i++)
    {
        temp = target - nums[i];
        returnSize[0] = i;
        for(j=i+1; j<numsSize; j++)
            if(nums[j] == temp)
            {
                returnSize[1] = j;
                return returnSize;
            }
    }
    returnSize[0] = returnSize[1] = 0;
    return returnSize;
}

int main()
{
    int numsSize, target, *returnSize, i, j, test_cases;
    printf("Enter number of test cases: ");
    scanf("%d", &test_cases);
    for(i=0; i<test_cases; i++)
    {
        printf("Enter number of elements: ");
        scanf("%d", &numsSize);
        int nums[numsSize];
        printf("Enter elements: ");
        for(j=0; j<numsSize; j++)
            scanf("%d", &nums[j]);
        printf("Enter target: ");
        scanf("%d", &target);
        returnSize = twoSum(nums, numsSize, target, returnSize);
        printf("[%d, %d]\n", returnSize[0], returnSize[1]);
        free(returnSize);
    }
}