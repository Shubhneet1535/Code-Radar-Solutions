#include <stdio.h>
int main() {
    int a,b;
    char operator;
    scanf("%d %d",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
             printf("%d+%d=%d",num1,num2,num1+num2);
             break;
        case '-':
             printf("%d-%d=%d",num1,num2,num1-num2);
             break;
        case '*':
             printf("%d*%d=%d",num1,num2,num1*num2);
             break;
        case '/':
            if(num2!=0){
                printf("%d/%d=%d",num1,num2,num1/num2);
            } else{
                printf("Error");
            }  
            break;   
        default:
           printf("Invalid month");
    }
    return 0;
}