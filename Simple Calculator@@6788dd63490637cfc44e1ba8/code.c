#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==1){
        printf("Monday");
    }
    else if(a==2){
        printf("Tuesday");
    }
    else if(a==3){
        printf("Wednesday");
    }
    else if(a==4){
        printf("Thrusday");
    }
    else{
        printf("Invalid");
    }
    return 0;
