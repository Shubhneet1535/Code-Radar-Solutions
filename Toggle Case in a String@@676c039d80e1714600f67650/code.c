#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i = 0;
    printf("");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
    printf("%s", str);
    return 0;
}