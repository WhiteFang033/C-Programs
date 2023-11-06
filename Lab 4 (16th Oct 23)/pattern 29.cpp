//Pattern 29
#include <stdio.h>
int main()
{
	int i, j, k , n;
	printf("Enter the value of n...\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<n-i-1; k++)
		{
			printf("  ");
		}
		for(j=0; j<i+1; j++)
		{
			if(i%2 == 0)
			{
				printf("* ");
			}
			else{
				printf("_ ");
			}
		}
		printf("\n");
	}
	for(i=0; i<n-1; i++)
	{
		for(k=0; k<i+1; k++)
		{
			printf("  ");
		}
		for(j=0; j<n-1-i; j++)
		{
			if(i%2 == 0)
			{
				printf("_ ");
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
