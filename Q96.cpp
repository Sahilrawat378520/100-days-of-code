#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    char *wordStart = sentence;
    char *current = sentence;

    while (*current) {
        if (*current == ' ') {
            reverseWord(wordStart, current - 1);
            wordStart = current + 1;
        }
        current++;
    }

    reverseWord(wordStart, current - 1);

    printf("%s\n", sentence);

    return 0;
}
