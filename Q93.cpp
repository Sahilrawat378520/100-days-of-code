#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR 256

void isAnagram(char *str1, char *str2)
{
    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    for (i = 0; i < MAX_CHAR; i++) {
        if (count1[i] != count2[i]) {
            printf("Not anagrams\n");
            return;
        }
    }

    printf("Anagrams\n");
}

int main()
{
    char str1[100];
    char str2[100];

    if (scanf("%99s", str1) != 1) return 1;
    if (scanf("%99s", str2) != 1) return 1;

    isAnagram(str1, str2);

    return 0;
}
