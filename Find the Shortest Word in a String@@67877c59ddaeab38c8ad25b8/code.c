#include <stdio.h>
#include <string.h>
#include <limits.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    char *word;
    char *shortest_word = "";
    int min_length = INT_MAX;
    word = strtok(str, " \n");
    while (word != NULL) {
        int len = strlen(word);
        if (len < min_length) {
            min_length = len;
            shortest_word = word;
        }
        word = strtok(NULL, " \n");
    }
    printf("%s\n", shortest_word);
    return 0;
}