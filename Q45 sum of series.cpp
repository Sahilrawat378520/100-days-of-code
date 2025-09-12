#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}

