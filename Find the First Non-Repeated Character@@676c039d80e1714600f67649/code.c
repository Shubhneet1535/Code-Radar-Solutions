#include <stdio.h>
#include <string.h>
char findFirstNonRepeatingCharacter(const char *str) {
    int frequency[256] = {0};
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < length; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '-';
}
int main() {
    char inputString[1000];
    printf("");
    scanf("%s", inputString);
    char result = findFirstNonRepeatingCharacter(inputString);
    printf("%c\n", result);
    return 0;
}