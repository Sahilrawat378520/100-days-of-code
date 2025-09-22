#include <stdio.h>

int findSingleElement(int arr[], int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid == 0 || mid == size - 1) {
            if (mid == 0 && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }
            if (mid == size - 1 && arr[mid] != arr[mid - 1]) {
                return arr[mid];
            }
        } else {
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }
        }

        if (mid % 2 == 0) { 
            if (arr[mid] == arr[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid - 1;
            }
        } else { 
            if (arr[mid] == arr[mid - 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int single = findSingleElement(arr, size);

    if (single != -1) {
        printf("The single element is: %d\n", single);
    } else {
        printf("No single element found.\n");
    }

    return 0;
}
