#include <stdio.h>
int main()
{
	int i, j, k, n;
	
	printf("Enter at number of rows to be printed...\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<(n-i-1); k++)
		{
			printf(" ");
		}
		for(j=0; j<(2*n); j++)
		{
			if(j%2==0)
			    printf("*");
			else
			    printf(" ");
		}
		printf("\n");
	}
	return 0;
}
