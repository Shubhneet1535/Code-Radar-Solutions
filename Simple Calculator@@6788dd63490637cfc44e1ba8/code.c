#include <stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch(operator){
        case '+':
             printf("%d%c%d=%d",a,operator,b,a+b);
             break;
        case '-':
             printf("%d%c%d=%d",a,operator,b,a-b);
             break;
        case '*':
             printf("%d*%d=%d",a,operator,b,a*b);
             break;
        case '/':
            if(b!=0){
                printf("%d/%d=%d",a,operator,b,a/b);
            } else{
                printf("Error");
            }  
            break;
    }
    return 0;
}