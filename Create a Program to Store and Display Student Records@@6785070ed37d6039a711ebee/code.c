#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int roll_number;
    char name[50];
    float marks;
} Student;
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student* students = (Student*)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (roll_number name marks): ", i + 1);
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }
    free(students);
    return 0;
}