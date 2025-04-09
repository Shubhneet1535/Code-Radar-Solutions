#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isBinary(const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            return false;
        }
    }
    return true;
}
int main() {
    char input[100];
    scanf("%s", input);
    if (isBinary(input)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}