#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char longestWord[100] = "";
    char currentWord[100];
    int i, j;
    printf("");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            currentWord[j] = str[i];
            i++;
            j++;
        }
        currentWord[j] = '\0';
        if (strlen(currentWord) > strlen(longestWord)) {
            strcpy(longestWord, currentWord);
        }
        if (str[i] == ' ') {
            i++;
        }
    }
    printf("%s\n", longestWord);
    return 0;
}