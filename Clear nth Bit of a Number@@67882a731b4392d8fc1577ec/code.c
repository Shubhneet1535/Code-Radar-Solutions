#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    A=((a&~(1<<b))!=0);
    printf("%d",A);
    return 0;
}