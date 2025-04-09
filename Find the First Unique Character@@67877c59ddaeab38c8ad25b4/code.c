#include <stdio.h>
#include <string.h>
char firstUniqueChar(const char *s) {
    int frequency[256] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        frequency[(unsigned char)s[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (frequency[(unsigned char)s[i]] == 1) {
            return s[i];
        }
    }
    return '-';
}
int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    char result = firstUniqueChar(input);
    printf("%c\n", result);
    return 0;
}