//Program to find the majority element
#include <stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		k = 1;
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				k++;
				arr[j] = -999;
			}
		}
		if(arr[i] != -999 && k>(n/2))
		{
			printf("The majority elements is: %d", arr[i]);
		}
		
	}
	return 0;
}
