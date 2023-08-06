#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int
main(void)
{
    int size = 28;
    int returnSize;
    int *res = NULL;
    int nums[] = {2, 10, 7, 11, 15, 3, 18,
                  6, 14, 1, 9, 8, 5, 35,
                  4, 13, 12, 16, 0, 27, 17,
                  17, 18, 19, 20, 21, 78, 123};

    /* Test case 1 */
    res = twoSum(nums, size, 56, &returnSize);
    assert(returnSize == 2 && nums[res[0]] + nums[res[1]] == 56);
    free(res);

    /* Test case 2 */
    res = twoSum(nums, size, 0, &returnSize);
    assert(returnSize == 0); // res is NULL, so no need to free

    /* Test case 3 */
    res = twoSum(nums, size, 123, &returnSize);
    assert(returnSize == 2 && nums[res[0]] + nums[res[1]] == 123);
    free(res);

    /* Test case 4 */
    res = twoSum(nums, size, 96, &returnSize);
    assert(returnSize == 2 && nums[res[0]] + nums[res[1]] == 96);
    free(res);

    printf("All test cases passed.\n");
    return EXIT_SUCCESS;
}
