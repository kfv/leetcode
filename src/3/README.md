# General Information

| ID |                                                              Title                                                              | Level  |
|:--:|:-------------------------------------------------------------------------------------------------------------------------------:|:------:|
| 3  | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium |

# Implementation Details

| Method         | Time Complexity | Space Complexity | Note                                                      |
|:---------------|:---------------:|:----------------:|:----------------------------------------------------------|
| Brute Force    |    $O(n^3)$     |      $O(1)$      | Early breaking could optimise it to $O(n^2)$ in practice. |
| Sliding Window |     $O(n)$      |      $O(1)$      | -                                                         |

## Brute Force Method

The brute force method iterates over the input string to find
the longest substring with unique characters. The length of the
largest substring with unique characters is returned as the
result.

The step-by-step breakdown of the function is as follows:

1. Initialises two pointers, *start* to the start of the string,
   and *end* to one character ahead.
2. Moves *end* forward as far as the substring between the two
   pointers is unique; otherwise, terminates the inner loop.
3. Updates *res* if the length of the substring is greater than
   its current value.
4. If *res* is bigger than the remaining length of the string,
   compared to *start*, it breaks the outer loop early and
   returns *res*.
5. If step 4 is not satisfied, increments *start* and repeats
   from step 2.

## Sliding Window Method

The sliding window method uses a similar approach but optimises
the search for repeating characters by tracking the last seen
positions of characters in a table. When a repeating character
is found, the *start* index jumps directly to the right seat of
the last seen position of the character, skipping the rest in
between.

The function:

1. Initialises a table of size 96 (the number of printable
   ASCII characters between space and tilde) named *seen* and
   fills it with -1.
2. Initialises *start* and *end* as indices, both initially
   located at the start of the string.
3. In each iteration, checks whether the current character *end*
   is pointing to is seen before.
4. If positive, if the last observed position lies within the
   current substring (between the *start* and *end* pointers,)
   it moves the *start* pointer to the right index of that
   position.
5. Updates *res* if the length of the current substring is
   greater than its current value.
6. If *res* is bigger than the remaining length of the string,
   compared to *start*, it breaks the loop early and returns 
   *res*. 
7. Updates the last seen position of the current character to
   *end*, and repeat from step 3.

# Additional Notes

The time complexity of the brute force method is theoretically
$O(n^3)$, since there are two nested loops, and the inner loop
calls `strchr()` function which has a linear time complexity
per se, ending with a total of $O(n^3)$. But in practice, the
inner loop can be optimised to $O(n)$ by breaking early and
avoid unnecessary calls and iterations, which could bring down
the time complexity to $O(n^2)$.

On the other hand, the sliding window method has a time
complexity of $O(n)$ as it only iterates over the string once.
