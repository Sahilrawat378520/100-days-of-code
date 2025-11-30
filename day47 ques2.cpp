//Q94: Find the longest word in a sentence.
#include <stdio.h>
int main() {
    char str[1000], word[1000], longest[1000];
    int i = 0, j = 0, maxLen = 0, len = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;
            if (len > maxLen) {
                maxLen = len;
                int k;
                for (k = 0; k <= len; k++) {
                    longest[k] = word[k];
                }
            }
            j = 0;
        }
        i++;
    }
    printf("%s\n", longest);
    return 0;
}
