//Q95: Check if one string is a rotation of another.
#include <stdio.h>
int main() {
    char str1[1000], str2[1000], temp[2000];
    int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, found = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    if (len1 > 0 && str1[len1 - 1] == '\n') len1--;
    if (len2 > 0 && str2[len2 - 1] == '\n') len2--;
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }
    for (j = 0; j < len1; j++) {
        temp[i++] = str1[j];
    }
    temp[i] = '\0';
    for (i = 0; i <= 2 * len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}
