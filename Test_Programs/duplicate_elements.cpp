//Program to find duplicate elements in an array
#include <stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the number of elements...\n");
	scanf("%d", &n);
	int a[n];
	
	printf("Enter the elements in the array...\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n;j++)
		{
			if((a[i] == a[j]) && (a[i] != -999))
			{
				printf("%d ", a[j]);
				a[j] = -999;
			}
		}
		
	}
	return 0;
}
