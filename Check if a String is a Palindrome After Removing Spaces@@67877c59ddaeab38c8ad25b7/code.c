#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (i < len && isspace(str[i])) {
            i++;
        }
        while (j >= 0 && isspace(str[j])) {
            j--;
        }
        if (i < j && tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}