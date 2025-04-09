#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    char replaceChar;
    int i;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    printf("Enter the character to replace vowels: ");
    scanf(" %c", &replaceChar);
    for (i = 0; str[i] != '\0'; i++) {
        char lowerChar = tolower(str[i]);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            str[i] = replaceChar;
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}