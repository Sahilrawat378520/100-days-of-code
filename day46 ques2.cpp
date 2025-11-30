//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, j, found = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    printf("%c\n", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if (found)
            break;
        i++;
    }
    if (!found)
        printf("No repeating character\n");
    return 0;
}
