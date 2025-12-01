//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           s->name, s->roll, s->marks);
    free(s);
    return 0;
}
