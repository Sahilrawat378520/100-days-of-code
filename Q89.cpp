#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;
    int i;

    scanf("%s %c", str, &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
