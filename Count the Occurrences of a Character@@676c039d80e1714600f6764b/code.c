#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char ch;
    int count = 0;
    int i;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    scanf(" %c", &ch);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}