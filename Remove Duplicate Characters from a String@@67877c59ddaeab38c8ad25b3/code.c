#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k, len;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }
    printf("%s", str);
    return 0;
}