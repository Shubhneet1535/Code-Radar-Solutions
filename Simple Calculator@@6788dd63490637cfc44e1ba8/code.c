#include <stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %d",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
             printf("%d+%d=%d",a,b,a+b);
             break;
        case '-':
             printf("%d-%d=%d",a,b,a-b);
             break;
        case '*':
             printf("%d*%d=%d",a,b,a*b);
             break;
        case '/':
            if(b!=0){
                printf("%d/%d=%d",a,b,a/b);
            } else{
                printf("Error");
            }  
            break;   
        default:
           printf("Invalid month");
    }
    return 0;
}