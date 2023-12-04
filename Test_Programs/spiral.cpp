//program to print spiral pattern
#include <stdio.h>
int main()
{
	int i, j, p, q, r, s, n, k=1;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	int arr[n][n];
	
	
	for(i=0; i<(n+1)/2; i++)
	{
		for(p=i; p<n-i; p++)
		{
			arr[i][p] = k++;
		}
		for(q = i+1; q<n-i; q++)
		{
			arr[q][n-i-1] = k++;
		}
		for(r=n-i-2; r>=i; r--)
		{
			arr[n-i-1][r] = k++;
		}
		for(s=n-i-2; s>i; s--)
		{
			arr[s][i] = k++;
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			{
				printf("%d ", arr[i][j]);
			}
		printf("\n");
	}
	
	return 0;
}
