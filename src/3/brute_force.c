#include <string.h>

int
lengthOfLongestSubstring(char *s)
{
    char *start = s, *end, *next_occur;
    int size = strlen(s);
    int res = 0;

    while (*start) {
        end = start + 1;

        while (*end) {
            next_occur = strchr(start, *end);
            if (next_occur && next_occur < end)
                break;
            end++;
        }

        res = (end - start) > res ? (end - start) : res;

        // break if remaining part of the string is shorter than max_length
        if (res >= (size - (start - s) - 1))
            break;

        start++;
    }

    return res;
}
