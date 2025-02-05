#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if ((a&~(1<<b))!=0)
       printf("%d",a,b);
    return 0;
}