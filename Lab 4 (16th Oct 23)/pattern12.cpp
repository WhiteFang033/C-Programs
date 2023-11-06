#include <stdio.h>
int main()
{
	int i, j, k, n, c;
	
	printf("Enter at number of rows to be printed...\n");
	scanf("%d", &n);
	
	if(n%2 != 0)
	    c = n/2+1;
	else
	    c = n/2;
	    
	for(i=0; i<c; i++)
	{
		for(j=0; j<(c-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
    for(i=0; i<n/2; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
