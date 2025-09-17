#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient; 

    
    printf("Enter two numbers: ");

    
    scanf("%d %d", &num1, &num2);

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    
    if (num2 != 0) {
        quotient = (float)num1 / num2; 
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%.2f\n", sum, difference, product, quotient);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Cannot divide by zero\n", sum, difference, product);
    }

    return 0;
}
