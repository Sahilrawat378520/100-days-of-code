//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, lastSpace = -1;
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == '\n') str[i] = '\0';
        if (str[i] == ' ') lastSpace = i;
        i++;
    }
    if (str[0] != ' ' && str[0] != '\0') {
        printf("%c.", str[0]);
    }
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && i != lastSpace && str[i] != ' ' && str[i] != '\0') {
            printf("%c.", str[i]);
        }
    }
    if (lastSpace != -1) {
        printf(" %s", &str[lastSpace + 1]);
    }
    printf("\n");
    return 0;
}
