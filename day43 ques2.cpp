//Q86: Check if a string is a palindrome.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, len = 0, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        len--;
    }
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
