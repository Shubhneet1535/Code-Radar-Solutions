#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int count = 0, i;
    printf("");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    if (strlen(str) > 0 && str[strlen(str) - 1] == '\n') {
         str[strlen(str) - 1] = '\0';
    }
    if(strlen(str) > 0) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}