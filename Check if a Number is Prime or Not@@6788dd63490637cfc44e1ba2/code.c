#include <stdio.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int number;
    scanf("%d", &number);
    if (isPrime(number)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}
