# General Information

| ID |                       Title                       | Level  |
|:--:|:-------------------------------------------------:|:------:|
| 1  | [Two Sum](https://leetcode.com/problems/two-sum/) |  Easy  |

# Implementation Details

| Method      | Time Complexity | Space Complexity | Note                              |
|:------------|:---------------:|:----------------:|:----------------------------------|
| Brute Force |    $O(n^2)$     |      $O(1)$      | -                                 |
| Two Pointer |  $O(n \log n)$  |      $O(n)$      | Assumes input needs to be sorted. |
| Hash Table  |     $O(n)$      |      $O(n)$      | -                                 |

## Brute Force Method

The brute force method is the simplest method to solve
this problem. It iterates through the array twice and
checks if the sum of the two elements is equal to the
target. If it is, then we return the indices of the two
elements.

## Two Pointer Method

The two pointer method is to sort the array first and
then use two pointers to iterate through the array. The
first pointer starts from the beginning of the array and
the second pointer starts from the end of the array. If
the sum of the two elements is greater than the target,
then we decrement the second pointer. If the sum of the
two elements is less than the target, then we increment
the first pointer. If the sum of the two elements is
equal to the target, then we return the indices of the
two elements.

For this problem, we're assuming that the array isn't
sorted, so we'll need to sort it ourselves. We're allowed
to modify the array in place, but we need to keep track
of the original indices of the elements. We can do this
by creating a new array of structs that contain the
element and its original index. We then sort the array
of structs by the element value. We can then use the
original indices to return the indices of the two
elements.

Keep in mind that if the array was already sorted, the time
complexity would be $O(n)$, making this method particularly
effective when working with pre-sorted arrays.

## Hash Table Method

The hash table method is to iterate through the array
once and store the elements in a hash table. We then
iterate through the array again and check if the
complement of the current element is in the hash table.
If it is, then we return the indices of the two elements.

# Additional Notes

Since we are assured that there is only one solution, we 
can simply set the _returnSize_ to 2 and return the first 
pair of indices that sum up to the target.

For the very same reason, we set the _calloc_ count to 2 
as well.
