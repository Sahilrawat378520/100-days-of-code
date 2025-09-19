#include <stdio.h>

int main() 
{
    int arr[] = {-1, 0, 1, 2, -2}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++)
	 {
        if (arr[i] > 0) 
		{
            positive_count++;
        } else if (arr[i] < 0) 
		{
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);

    return 0;
}
