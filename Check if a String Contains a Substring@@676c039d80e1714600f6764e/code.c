#include <stdio.h>
#include <string.h>
int main() {
    char main_string[100];
    char substring[100];
    fgets(main_string, sizeof(main_string), stdin);
    main_string[strcspn(main_string, "\n")] = 0; 
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = 0;
    if (strstr(main_string, substring) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}