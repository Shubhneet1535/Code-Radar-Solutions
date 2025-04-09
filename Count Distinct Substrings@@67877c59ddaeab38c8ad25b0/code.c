#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int countDistinctSubstrings(const char *str) {
    int n = strlen(str);
    if (n == 0) {
        return 0;
    }
    char **substrings = (char **)malloc(n * (n + 1) / 2 * sizeof(char *));
    if (substrings == NULL) {
        perror("Failed to allocate memory for substrings");
        exit(EXIT_FAILURE);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            substrings[count] = (char *)malloc((j - i + 2) * sizeof(char));
            if (substrings[count] == NULL) {
                perror("Failed to allocate memory for substring");
                for (int k = 0; k < count; k++) {
                    free(substrings[k]);
                }
                free(substrings);
                exit(EXIT_FAILURE);
            }
            strncpy(substrings[count], str + i, j - i + 1);
            substrings[count][j - i + 1] = '\0';
            count++;
        }
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(substrings[i], substrings[j]) > 0) {
                char *temp = substrings[i];
                substrings[i] = substrings[j];
                substrings[j] = temp;
            }
        }
    }
    int distinctCount = 0;
    if (count > 0) {
         distinctCount = 1;
        for (int i = 1; i < count; i++) {
            if (strcmp(substrings[i], substrings[i - 1]) != 0) {
                distinctCount++;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        free(substrings[i]);
    }
    free(substrings);
    return distinctCount;
}
int main() {
    char inputString[1001];
    if (scanf("%s", inputString) != 1) {
        fprintf(stderr, "Failed to read input string\n");
        return EXIT_FAILURE;
    }
    int result = countDistinctSubstrings(inputString);
    printf("%d\n", result);
    return 0;
}