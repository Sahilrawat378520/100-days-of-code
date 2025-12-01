//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void displayStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student st;
    scanf("%s %d %f", st.name, &st.roll, &st.marks);
    displayStudent(st);
    return 0;
}
