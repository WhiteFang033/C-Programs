//Program to find the number of distinct elements in an array
#include <stdio.h>
int main()
{
	int i, j, k=0, c=0, n;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the values in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[j] == arr[i])
			{
				k++;
				arr[j] = -999;
			}
		}
		if(k>1 && arr[i] != -999)
		{
			c++;
		}
	}
	
	printf("Duplicated: %d", c);
	return 0;
}
