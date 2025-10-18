#include <stdio.h>

void findFirstAndLastOccurrence(int nums[], int size, int target) {
    int first = -1;
    int last = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first != -1) {
        printf("%d,%d\n", first, last);
    } else {
        printf("-1,-1\n");
    }
}

int main() {
    int nums1[] = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    findFirstAndLastOccurrence(nums1, size1, target1);

    int nums2[] = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    findFirstAndLastOccurrence(nums2, size2, target2);

    int nums3[] = {5, 7, 7, 8, 8, 10};
    int target3 = 10;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    findFirstAndLastOccurrence(nums3, size3, target3);

    return 0;
}
