#include <stdio.h>
#include <string.h>
void removeSpaces(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100];
    printf("");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    removeSpaces(str);
    printf("%s\n", str);
    return 0;
}