//Program to find missing integer from [1,N]
#include <stdio.h>
int main()
{
	int i, j ,k , n;
	printf("Enter the value of n ...\n");
	scanf("%d", &n);
	int arr[n-1];
	
	printf("Enter numbers in the array...\n");
	
	for(i=0; i<n-1; i++)
	{
		scanf("%d", &arr[i]);	
	}
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-2; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	
	printf("Printing array...\n");
	for(i=0; i<n-1; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n-1; i++)
	{
		if((i<n-2) && (arr[i] != i+1))
		{
			printf("%d", i+1);
			break;
		}
		else if((i==n-2) && (arr[i]== i+1))
		{
			printf("%d", i+2);
			break;
		}
	}
	return 0;
	
}
