//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, start = 0, end = 0, len = 0, j;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0') len++;
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            if (str[i + 1] == '\0')
                end = i;
            else
                end = i - 1;

            for (j = end; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
        i++;
    }
    printf("\n");
    return 0;
}
