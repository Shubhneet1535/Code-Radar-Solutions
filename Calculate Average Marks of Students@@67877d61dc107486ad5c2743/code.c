#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    struct Student students;
    for (int i = 0; i < N; i++) {
        printf("Enter roll number, name, and marks for student %d (separated by spaces): ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    float sum = 0;
    for (int i = 0; i < N; i++) {
        sum += students[i].marks;
    }
    float average = sum / N;
    printf("Average Marks: %.2f\n", average);
    return 0;
}