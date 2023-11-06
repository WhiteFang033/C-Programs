//Butterfly Pattern
#include <stdio.h>
int main()
{
	int i, j , k , n;
	printf("Enter the value of n ...\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<(2*n); j++)
		{
			if(j<=i || j>=((2*n)-i-1))
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<2*n; j++)
		{
			if(j<(n-i) || j>= ((n)+i))
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
