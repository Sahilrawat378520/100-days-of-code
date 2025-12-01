//Q143: Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    printf("\nEnter details (Name Roll Marks):\n");
    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }
    printf("\nTopper: %s (Marks: %.2f)\n",
           s[topperIndex].name,
           s[topperIndex].marks);
    return 0;
}
