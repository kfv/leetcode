#include <stdlib.h>

typedef struct {
    int value;
    int index;
} num_index;

int
compare(const void* a, const void* b)
{
    return ((num_index*)a)->value - ((num_index*)b)->value;
}

int*
twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    num_index sorted[numsSize];
    int left = 0, right = numsSize - 1;

    for (int i = 0; i < numsSize; i++) {
        sorted[i].value = nums[i];
        sorted[i].index = i;
    }

    qsort(sorted, numsSize, sizeof(num_index), compare);

    while (left < right) {
        int sum = sorted[left].value + sorted[right].value;
        if (sum == target) {
            int* res = calloc(2,sizeof(int));
            *returnSize = 2;
            res[0] = sorted[left].index;
            res[1] = sorted[right].index;
            return res;
        }
        sum < target ? left++ : right--;
    }

    *returnSize = 0;
    return NULL;
}
