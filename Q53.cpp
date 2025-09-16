
#include <stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i+n;j++)
		{
			printf("*");
		}
     	
		printf("\n");
		n++;
	}
	n=3;
	for(i=4;i>=1;i--)          
	{									
		for(j=i+n;j>0;j--)    
		{						
			printf("*");        
		}  						
						
		printf("\n");		
		n--;
	}
}
