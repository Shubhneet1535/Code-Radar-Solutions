#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
     str2[strcspn(str2, "\n")] = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}