#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i;
    int maxFreq = -1;
    int mostFrequentDigit = -1;

    scanf("%lld", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        } else if (freq[i] == maxFreq && i > mostFrequentDigit) {
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}

