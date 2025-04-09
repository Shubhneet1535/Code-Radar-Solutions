#include <stdio.h>
int main() {
    char str[555];
    int i = 0;
    printf("");
    scanf("%s", str);
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("%s\n", str);
    return 0;
}