#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char *s);

int main() {
    char str0[] = "abiaksldkwp xyza";
    assert(lengthOfLongestSubstring(str0) == 11);

    char str1[] = "abcabcbb";
    assert(lengthOfLongestSubstring(str1) == 3);

    char str2[] = "bbbbb";
    assert(lengthOfLongestSubstring(str2) == 1);

    char str3[] = "pwwkew";
    assert(lengthOfLongestSubstring(str3) == 3);

    char str4[] = "abcdean";
    assert(lengthOfLongestSubstring(str4) == 6);

    char str5[] = "";
    assert(lengthOfLongestSubstring(str5) == 0);

    char str6[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789~!@#$%^&*()_+`-=[]{}|\\:;'\"<>?,./ ";
    assert(lengthOfLongestSubstring(str6) == 95);

    printf("All test cases passed.\n");
    return EXIT_SUCCESS;
}
