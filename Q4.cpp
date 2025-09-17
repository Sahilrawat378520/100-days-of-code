#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14; 
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
