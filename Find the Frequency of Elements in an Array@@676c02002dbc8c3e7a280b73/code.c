#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[101] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
    return 0;
}