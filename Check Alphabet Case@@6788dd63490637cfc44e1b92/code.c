#include <stdio.h>
int main() {
    Char ch;
    scanf("%c",&ch);
    if (ch>=A&&ch<=Z){
        printf("Uppecase");
    }
    else{
        printf("Lowercase");
    }    
    return 0;
}