//Q91: Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}
