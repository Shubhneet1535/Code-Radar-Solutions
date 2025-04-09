#include <stdio.h>
#include <string.h>
int countWords(char *str) {
    int count = 0;
    int i = 0;
    int inWord = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char str[100];
    printf("\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("\n%d\n", countWords(str));
    return 0;
}