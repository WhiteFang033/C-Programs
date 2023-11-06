//Program to find duplicate elements in an array
#include <stdio.h>
int main()
{
	int i, j, n,c = 0;
	printf("Enter the size of the array...\n");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the numbers in the array... \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Printing the array... \n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(i=0; i<n;i++)
	{
		for(j=i; j<n;j++)
		{
			if((arr[i] == arr[j]) && (i!=j))
			{
				printf("%d", arr[i]);
			}
		}
	}
	
	return 0;
}
