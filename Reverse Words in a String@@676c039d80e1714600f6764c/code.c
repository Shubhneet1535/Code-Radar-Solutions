#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char input_string[1000];
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strcspn(input_string, "\n")] = 0; 
    char *token = strtok(input_string, " ");
    while (token != NULL) {
        reverse_string(token);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}