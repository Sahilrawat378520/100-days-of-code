#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    for (i = 1; i <= n; ++i) 
	{
        sum += i; 
    }
    printf("Sum = %d\n", sum);

    return 0;
}
