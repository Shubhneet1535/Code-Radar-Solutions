#include <stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %d",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
             printf("%d+%d=%d",a,operator,b,a+b);
             break;
        case '-':
             printf("%d-%d=%d",a,operator,b,a-b);
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