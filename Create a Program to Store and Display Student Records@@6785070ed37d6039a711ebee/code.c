#include <stdio.h>
struct student{
    int roll_number;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d", &ns);
    struct student students[n];
    for (int i = 0; i < n; i++) {scanf("%d %s %f", &students[i].roll_number,&students[i].name,&students[i].marks);}
    for (int i = 0; i < n; i++) {printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].roll_number,students[i].name,students[i].marks);}
    return 0;
}