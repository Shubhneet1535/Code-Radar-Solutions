#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n <= 1) {
        return s;
    }
    int start = 0;
    int max_len = 1;
    for (int i = 0; i < n; i++){
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                max_len = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                max_len = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    }
    char* result = (char*)malloc(max_len + 1);
    strncpy(result, s + start, max_len);
    result[max_len] = '\0';
    return result;
}
int main() {
    char input[1000];
    printf("Input: ");
    scanf("%s", input);

    char* output = longestPalindrome(input);
    printf("Output: %s\n", output);

    free(output);
    return 0;
}