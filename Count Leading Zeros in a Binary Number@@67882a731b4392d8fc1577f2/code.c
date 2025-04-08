#include <stdio.h>
int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;
        }
        count++;
    }
    printf("Output: %d\n", count);
    return 0;
}