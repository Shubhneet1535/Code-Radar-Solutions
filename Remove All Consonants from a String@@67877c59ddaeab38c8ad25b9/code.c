#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void removeConsonants(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i]) || !isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char inputString[1000];
    printf("\n");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    removeConsonants(inputString);
    printf("%s\n", inputString);
    return 0;
}