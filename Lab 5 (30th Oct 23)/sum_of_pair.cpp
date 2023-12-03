//Program to find the pairs whose sum is equal to the given value
#include <stdio.h>
int main()
{
	int n, i, j, sum;
	printf("Enter the number of elements...\n");
	scanf("%d", &n);
	int a[n];
	
	printf("Enter the elements in the array...\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the value of sum: \n");
	scanf("%d", &sum);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n;j++)
		{
			if(a[i]+a[j] == sum)
			{
				printf("Pair Found : (%d, %d)\n", a[i], a[j]);
			}
		}
	}
	return 0;
}
