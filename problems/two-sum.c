int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *result = (int*)malloc(sizeof(int) * 2);

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize - 1; j++)
        {
            if (nums[i] + nums[j + 1] == target && i != j + 1)
            {
                int array[] = {i, j + 1};
                result[0] = i;
                result[1] = j + 1;
                *returnSize = 2;
                return result;
            }
        }
    }
    return NULL;
}