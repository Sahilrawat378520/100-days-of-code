#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Length of the string is: %d\n", count);

    return 0;
}
