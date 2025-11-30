//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[50][50];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int first = 1;
    printf("Diagonal Traversal:\n");
    for (int k = 0; k <= r + c - 2; k++) {
        int i_start = (k - (c - 1) > 0) ? k - (c - 1) : 0;
        int i_end = (k < r - 1) ? k : r - 1;
        if (k % 2 == 0) {
            for (int i = i_end; i >= i_start; i--) {
                if (!first) printf(" ");
                printf("%d", a[i][k - i]);
                first = 0;
            }
        } else {
            for (int i = i_start; i <= i_end; i++) {
                if (!first) printf(" ");
                printf("%d", a[i][k - i]);
                first = 0;
            }
        }
    }
    return 0;
}
