#include <stdio.h>
int main() {
    int N, i, largest, second_largest;
    scanf("%d", &N);
    int arr;
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    if (N < 2) {
        printf("Not enough elements in the array\n");
        return 1;
    }
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }
    for (i = 2; i < N; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    printf("%d\n", second_largest);
    return 0;
}