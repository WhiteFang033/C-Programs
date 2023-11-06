//Pattern 30
#include <stdio.h>
int main()
{
	int i, j, k , n;
	printf("Enter the value of n...\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<i; k++)
		{
			printf("  ");
		}
		for(j=0; j< 2*(n-i) -1; j++)
		{
			if(j==0 || j ==(2*(n-i-1)))
			{
				printf("* ");
			}
			else{
				printf("_ ");
			}
		}
		printf("\n");
	}
}
