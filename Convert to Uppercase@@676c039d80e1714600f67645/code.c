#include <stdio.h>
#include <ctype.h>

void to_upper_case(char *str) {
    if (str == NULL) {
        return;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char input_string[1000];
    printf("");
    fgets(input_string, sizeof(input_string), stdin);
  
    to_upper_case(input_string);
  
    printf("%s", input_string);
    return 0;
}