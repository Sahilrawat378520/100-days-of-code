#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        free(temp);
        return 1;
    } else {
        free(temp);
        return 0;
    }
}

int main() {
    char str1_1[] = "abcde";
    char str2_1[] = "deabc";
    if (areRotations(str1_1, str2_1)) {
        printf("Input 1: %s %s Output 1: Rotation\n", str1_1, str2_1);
    } else {
        printf("Input 1: %s %s Output 1: Not rotation\n", str1_1, str2_1);
    }

    char str1_2[] = "abc";
    char str2_2[] = "acb";
    if (areRotations(str1_2, str2_2)) {
        printf("Input 2: %s %s Output 2: Rotation\n", str1_2, str2_2);
    } else {
        printf("Input 2: %s %s Output 2: Not rotation\n", str1_2, str2_2);
    }

    return 0;
}
