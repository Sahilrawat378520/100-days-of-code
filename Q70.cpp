#include <stdio.h>
#include <stdlib.h>

void rotate(int* nums, int numsSize, int k) {
    if (numsSize == 0 || k == 0) {
        return;
    }

    k %= numsSize;
    if (k == 0) {
        return;
    }

    int* temp = (int*)malloc(k * sizeof(int));
    if (temp == NULL) {
        return; 
    }

    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }

    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }

    free(temp);
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = 2;
    rotate(nums1, numsSize1, k1);
    for (int i = 0; i < numsSize1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    int nums2[] = {-1, -100, 3, 99};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = 2;
    rotate(nums2, numsSize2, k2);
    for (int i = 0; i < numsSize2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}
