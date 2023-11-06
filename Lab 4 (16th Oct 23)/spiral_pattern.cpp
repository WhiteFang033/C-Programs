//Program to Print Spiral Pattern
#include <stdio.h>
int main()
{
	int n, i, j, p, q, r, s, k;
	printf("Enter the value of n...\n");
	scanf("%d", &n);
	
	int arr[n][n];
	
	k = 1;
	
	for(i=0; i<(n+1)/2; i++)
	{
		for(p=i; p<n-i; p++)
		{
			arr[i][p] = k;
			k++;
		}
		
		for(q = i+1; q<n-i; q++)
		{
			arr[q][n-i-1] = k;
			k++;
		}
		
		for(r = n-i-2; r>=i; r--)
		{
			arr[n-i-1][r] = k;
			k++;
		}
		
		for(s = n-i-2; s>i; s--)
		{
			arr[s][i] = k;
			k++;
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
