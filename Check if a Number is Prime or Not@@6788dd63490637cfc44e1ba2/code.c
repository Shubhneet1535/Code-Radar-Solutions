#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>1&&a%a==0){
        printf("prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}