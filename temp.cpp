#include <stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in celsius   ");
	scanf("%f",&c);
	f=(c*9/5+32);
	printf(" The temperature in fahrenheit is %f   ",f);
}
