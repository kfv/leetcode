#include <stdlib.h>

int*
twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    for (size_t i = 0; i < numsSize; i++) {
        for (size_t j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                int* res = calloc(2, sizeof(int));
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
