//Program to find the ceil in sorted array
#include <stdio.h>
int main()
{
	int i, j, n, value, temp;
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
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	
	printf("Enter a value: \n");
	scanf("%d", &value);
	
	
	for(i=0; i<n; i++)
	{
		if(value < arr[i])
		{
			printf("The ceiling of %d is: %d",value, arr[i]);
			break;
		}
	}
	
	return 0;
}

