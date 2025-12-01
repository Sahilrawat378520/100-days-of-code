/*Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.*/
#include <stdio.h>
int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;  
    double average;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("File contains no numbers.\n");
        return 0;
    }
    average = (double)sum / count;
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
