#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}