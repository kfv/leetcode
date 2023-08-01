#include <string.h>

#define ASCII_CHARS 96

int
lengthOfLongestSubstring(char *s)
{
    int seen[ASCII_CHARS];
    int n = strlen(s);
    int i = 0, res = 0;

    memset(seen, -1, sizeof(seen));

    for (int j = 0; j < n; j++) {
        int idx = (unsigned char)s[j] - 32;

        if (seen[idx] != -1)
            i = (seen[idx] + 1) > i ? seen[idx] + 1 : i;

        res = (j - i + 1 > res) ? j - i + 1 : res;

        // break if remaining part of the string is shorter than res
        if (n - i <= res)
            break;

        seen[idx] = j;
    }

    return res;
}
