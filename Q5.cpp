#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    printf("Before swap number1: %d \n", num1);
    printf("Before swap number2: %d \n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swap number1: %d \n", num1);
	printf("After swap number2: %d \n", num2);
    return 0;
}
