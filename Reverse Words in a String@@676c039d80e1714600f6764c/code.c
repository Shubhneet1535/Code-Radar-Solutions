#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_word(char *word) {
    int len = strlen(word);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int main() {
    char str[1000];
    printf("\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("\n");
    char *token = strtok(str, " ");
    while (token != NULL) {
        reverse_word(token);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
