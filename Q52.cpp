#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i += 2) {
        for (j = 0; j < i; j++) {
            printf(" * \n");
        }
        printf("\n"); 
    }
    for (i = 3; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf(" * \n");
        }
        printf("\n"); 
    }

    return 0;
}
