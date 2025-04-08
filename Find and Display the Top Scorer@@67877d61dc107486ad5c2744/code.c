#include <stdio.h>
#include <string.h>
struct Student {
    int roll_number;
    char name[50];
    float marks;
};
int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 
    struct Student students;
    for (i = 0; i < n; i++) {
        printf("Enter roll number, name, and marks for student %d (separated by spaces): ", i + 1);
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    struct Student top_scorer = students[0];
    for (i = 1; i < n; i++) {
        if (students[i].marks > top_scorer.marks) {
            top_scorer = students[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", top_scorer.roll_number, top_scorer.name, top_scorer.marks);
    return 0;
}