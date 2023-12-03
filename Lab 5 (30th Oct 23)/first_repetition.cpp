//Program to print the element that repeats first in an array
#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter the elements in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//Logic to find the element that repeats first
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				printf("The element that repeats first is: %d", arr[j]);
				break;
			}
		}
	}
	return 0;
}
