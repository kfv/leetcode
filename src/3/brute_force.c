#include <string.h>

int
lengthOfLongestSubstring(char *s)
{
    char *start = s, *cur, *next_occur;
    int n = strlen(s);
    int res = 0;

    while (*start) {
        cur = start + 1;
        while (*cur) {
            next_occur = strchr(start, *cur);
            if (next_occur && next_occur < cur)
                break;
            cur++;
        }

        res = (cur - start) > res ? (cur - start) : res;
        // break if remaining part of the string is shorter than max_length
        if (res >= n - (start - s) -1)
            break;
        start++;
    }

    return res;
}
