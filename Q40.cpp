#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    scanf("%s", binary);
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
    }
    return 0;
}

