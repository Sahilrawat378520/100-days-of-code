#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, temp, digitsCount, divisor;
    long long swappedNumber; 

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Number after swapping first and last digit: 0\n");
        return 0;
    }

    
    lastDigit = number % 10;

    
    temp = number;
    digitsCount = 0;
    divisor = 1;
    for (; temp > 0; temp /= 10) {
        digitsCount++;
        if (temp >= 10) { 
            divisor *= 10;
        }
    }

    
    firstDigit = number / divisor;

    
    swappedNumber = number % divisor; 
    swappedNumber = swappedNumber / 10; 


    swappedNumber = (long long)lastDigit * divisor + swappedNumber * 10 + firstDigit;

    printf("Number after swapping first and last digit: %lld\n", swappedNumber);

    return 0;
}
