#include <stdio.h>

int main() 
{
    int arr[] = {5, 2, 9, 1, 7, 3, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    if (n == 0) 
	{
        printf("Array is empty.\n");
        return 1; 
    }
    int max_element = arr[0]; 
    int min_element = arr[0]; 
    for (int i = 1; i < n; i++)
	 {
        if (arr[i] > max_element)
		 {
            max_element = arr[i]; 
        }
        if (arr[i] < min_element) 
		{
            min_element = arr[i]; 
        }
    }

    printf("Maximum element: %d\n", max_element);
    printf("Minimum element: %d\n", min_element);

    return 0;
}
