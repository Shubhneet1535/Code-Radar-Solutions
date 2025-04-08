#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX, max = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}