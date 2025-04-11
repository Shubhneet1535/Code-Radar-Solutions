#include <stdio.h>
int main() {
    int n, num, even_count = 0, odd_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("%d %d\n", even_count, odd_count); 
    return 0;
}