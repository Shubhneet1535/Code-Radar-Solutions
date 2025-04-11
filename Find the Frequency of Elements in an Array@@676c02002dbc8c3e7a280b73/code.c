#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[1001] = {0}; // Assuming input numbers are between 0 and 1000
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
    return 0;
}