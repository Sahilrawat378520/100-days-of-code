#include <stdio.h>

int main() {
    int arr[100];
    int size, element, pos;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    
    printf("Enter the position where the element should be inserted (1-based): ");
    scanf("%d", &pos);

    
    pos--; 

    
    if (pos < 0 || pos > size) {
        printf("Invalid position for insertion.\n");
    } else {
        
        for (int i = size - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }

        
        arr[pos] = element;

        
        size++;

        
        printf("Array after insertion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
