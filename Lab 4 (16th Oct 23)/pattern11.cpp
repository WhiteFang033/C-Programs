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
		for(k=0; k<i; k++)
		{
			printf(" ");
		}
		for(j=0; j<(c-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=0; i<c; i++)
	{
		for(k=0; k<(c-i-1); k++)
		{
			printf(" ");
		}
		for(j=0; j<(i+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
