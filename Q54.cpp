#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{ 
    	if(i==2||i==4)
	   {
	   	printf("\n");
	   	continue;
	   } 
	   if(i==6)
	   i=7;
		for(j=1;j<=i;j++)
		{ 
			printf("*");
		}
		printf("\n");
	}
	for(i=3;i>=1;i--)
	{ if(i==2)
	  {
	  	printf("\n");
	  	continue;
	  }
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}




