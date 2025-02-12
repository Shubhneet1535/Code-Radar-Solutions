#include<stdio.h>
int main(){
    int x,y;
    char o;
    scanf("%d %d %c", &x, &y, &o);
    if(o == '+'){
        int op = x + y;
        printf("%d", op);}
    else if(o == '-'){
        int op = x - y;
        printf("%d",op);}
    else if(o == '*'){
        int op = x * y;
        printf("%d",op);}
    else if(o == '/'){
        if(y==0){printf("error");}
        else{
            int op = x / y;
            printf("%d",op);}
    }
    return 0;
}