#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char *str = NULL;
    size_t len = 0;
    ssize_t read;
    printf("");
    read = getline(&str, &len, stdin);
    if (read == -1) {
        perror("getline");
        exit(EXIT_FAILURE);
    }
    str[strcspn(str, "\n")] = 0;
    char charToReplace;
    printf("");
    scanf(" %c", &charToReplace);
    getchar();
    char replacementChar;
    printf("");
    scanf(" %c", &replacementChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToReplace) {
            str[i] = replacementChar;
        }
    }
    printf("%s\n", str);
    free(str); 
    return 0;
}