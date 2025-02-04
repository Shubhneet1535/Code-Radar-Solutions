#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    printf("Hexadecimal: 0x%x\n",num);
    printf("Octal: 0%o\n",num);
    return 0;
}