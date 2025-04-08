#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    int i = 0;
    printf("");
    scanf("%s", str);
    while (str[i] != '\0') {
        length++;
        i++;
    }
    printf("%d\n", length);
    return 0;
}