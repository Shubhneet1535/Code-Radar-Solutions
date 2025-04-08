#include <stdio.h>
#include <string.h>
#include <limits.h>
char mostFrequentChar(const char *str) {
    int freq[256] = {0};
    int maxFreq = 0;
    char result = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            result = str[i];
        } else if (freq[(unsigned char)str[i]] == maxFreq && str[i] < result) {
            result = str[i];
        }
    }
    return result;
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("%c\n", mostFrequentChar(str));
    return 0;
}