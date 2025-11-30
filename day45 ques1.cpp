//Q89: Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[1000], ch;
    int i = 0, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}
