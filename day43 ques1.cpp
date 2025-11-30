//Q85: Reverse a string.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        len--;
    }
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
