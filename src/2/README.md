# General Information

| ID |                               Title                               | Level  |
|:--:|:-----------------------------------------------------------------:|:------:|
| 2  | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Medium |

# Implementation Details

| Method    | Time Complexity | Space Complexity | Note                                            |
|:----------|:---------------:|:----------------:|:------------------------------------------------|
| Iterative | _O(max(n, m))_  |  _O(max(n, m))_  | n and m are the lengths of the two input lists. |

## Iterative Method

The iterative method is the straightforward approach to solve this
problem. It starts from the head of both lists and advances until
the end of them is reached.

Please note that a dummy node is initially created to serve as the
pseudo-head of the result list, which is then discarded at the end
of the function.

In each step, it:

1. Calculates the sum of the corresponding positions of the input
   lists.
2. Moves to the next node in both input lists.
3. Updates the carry value for the next iteration.
4. Creates a new node with the digit value of the sum % 10 and
   attaches it to the current node of the result list.
5. Advances the current node of the result list.
6. Repeat steps 1-4 until the end of both input lists is reached.
7. If there is a remaining carry of 1 at the end, it adds a new
   node with this carry to the result list.

If an input list is shorter, then we can assume that the remaining
digits are 0 since sum assigned the value carry at the beginning
of each iteration, and the carry value is 0 if the corresponding
position of the shorter list is null.

With this method, we are essentially mimicking the process of the
"long addition" method as performed by hand or in elementary
arithmetic.

# Additional Notes

The dummy head node used in the solution is a common technique
used in linked list problems. It's an extra node we put ahead of
the result list, which allows us to avoid having to check if the
head node is null when we are appending to the list.

In terms of memory management, to avoid memory leaks, users of
this function should remember to free the memory allocated for
the returned result list when they no longer need it.
