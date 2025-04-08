#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;
    fgets(str1, MAX_SIZE, stdin);
    fgets(str2, MAX_SIZE, stdin);
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i] - 'a']++;
    }
    int anagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }
    if (anagram) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}