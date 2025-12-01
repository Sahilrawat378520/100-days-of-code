//Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee e1, e2;
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Salary: ");
    scanf("%f", &e1.salary);
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee details stored successfully.\n");
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);
    return 0;
}
