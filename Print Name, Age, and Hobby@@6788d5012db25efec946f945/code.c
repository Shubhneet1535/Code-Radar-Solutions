#include <stdio.h>
int main() {
    char Name[100];
    int age;
    char Hobby[100];
    scanf("%s,%d,%s",Name,&age,Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",Hobby);
    return 0;
}