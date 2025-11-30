//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
int main() {
    char str1[1000], str2[1000];
    int i = 0, j, count1[26] = {0}, count2[26] = {0}, flag = 1;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
        i++;
    }
    for (j = 0; j < 26; j++) {
        if (count1[j] != count2[j]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}
