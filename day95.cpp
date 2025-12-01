//Q145: Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];
}
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    printf("Enter details (Name Roll Marks):\n");
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n",
           top.name, top.roll, top.marks);
    return 0;
}
