#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int count = 0, i;
    printf("Enter the string\n");
    gets(s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    printf("Number of words in given string are: %d\n", count + 1);
    return 0;
}