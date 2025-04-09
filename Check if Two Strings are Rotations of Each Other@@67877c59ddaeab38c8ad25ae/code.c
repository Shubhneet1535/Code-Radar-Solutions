#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int areRotations(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char *temp;
    if (size1 != size2)
        return 0;
    temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    temp[0] = '\0';
    strcat(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        free(temp);
        return 1;
    } else {
        free(temp);
        return 0;
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    if (areRotations(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}