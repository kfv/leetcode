#include <string.h>

#define ASCII_CHARS 96

int
lengthOfLongestSubstring(char *s)
{
    int seen[ASCII_CHARS];
    int size = strlen(s);
    int start = 0, res = 0;

    memset(seen, -1, sizeof(seen));

    for (int end = 0; end < size; end++) {
        int idx = (unsigned char)s[end] - 32;

        if (seen[idx] != -1)
            start = (seen[idx] + 1) > start ? seen[idx] + 1 : start;

        res = (end - start + 1 > res) ? end - start + 1 : res;

        // break if remaining part of the string is shorter than res
        if (size - start <= res)
            break;

        seen[idx] = end;
    }

    return res;
}
